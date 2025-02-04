#include "common.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <regex>
#include <vector>

struct Quadruple {
    string operator_;   // 操作符
    string operand1;    // 操作数1
    string operand2;    // 操作数2
    string result;      // 结果
};

class CParser {
public:
    CParser(const string& filename, ofstream& output_file) : output_file(output_file) {
        input_file.open(filename);
        if (!input_file) {
            cerr << "无法打开文件：" << filename << endl;
            exit(1);
        }
    }

    void parse() {
        string line;
        int line_number = 1;
        int label_count = 0;  // 用于生成标签的计数器

        while (getline(input_file, line)) {
            // 去掉行首尾空格
            line = trim(line);

            // 跳过空行和注释
            if (line.empty() || line.find("//") == 0 || line.find("/*") == 0) {
                line_number++;
                continue;
            }

            // 匹配数据类型声明 int
            if (regex_match(line, regex("^int\\s+([a-zA-Z_][a-zA-Z0-9_]*)\\s*;"))) {
                string var = line.substr(4, line.find(';') - 4);
                emitQuad("declare", var, "", "");
            }
            // 匹配赋值语句
            else if (regex_match(line, regex("^([a-zA-Z_][a-zA-Z0-9_]*)\\s*=\\s*(.*)\\s*;"))) {
                smatch match;
                regex_match(line, match, regex("^([a-zA-Z_][a-zA-Z0-9_]*)\\s*=\\s*(.*)\\s*;"));
                string var = match[1];
                string expr = match[2];
                emitQuad("assign", expr, "", var);
            }
            // 匹配while循环
            else if (regex_match(line, regex("^while\\s*\\((.*)\\)\\s*\\{"))) {
                smatch match;
                regex_match(line, match, regex("^while\\s*\\((.*)\\)\\s*\\{"));
                string condition = match[1];
                string label_start = "L" + to_string(label_count++);
                string label_end = "L" + to_string(label_count++);
                emitQuad("label", label_start, "", "");  // 生成循环开始标签
                emitQuad("if", condition, "", label_end);  // 如果条件为假，跳转到label_end
                emitQuad("jump", label_start, "", "loop");  // 如果条件为真，跳转回label_start
                emitQuad("label", label_end, "", "");  // 生成循环结束标签
            }
            else if (regex_match(line, regex("^int\\s+([a-zA-Z_][a-zA-Z0-9_]*)\\s*\\((.*)\\)\\s*\\{"))) {
    // 匹配自定义 int 类型函数定义
    smatch match;
    regex_match(line, match, regex("^int\\s+([a-zA-Z_][a-zA-Z0-9_]*)\\s*\\((.*)\\)\\s*\\{"));
    string func_name = match[1];  // 函数名
    string params = match[2];     // 参数列表
    
    emitQuad("function_start", func_name, params, "");  // 生成函数开始的四元式
    
    // 进入函数体处理，循环读取代码块直到匹配到函数结束 "}"
    while (getline(input_file, line)) {
        line = trim(line);  // 去掉首尾空格
        if (line == "}") {
            // 结束函数
            emitQuad("function_end", func_name, "", "");
            break;
        }
        
        // 递归解析函数体内的内容
        parseLine(line, line_number);
    }
}

            // 匹配if语句
            else if (regex_match(line, regex("^if\\s*\\((.*)\\)\\s*\\{"))) {
                smatch match;
                regex_match(line, match, regex("^if\\s*\\((.*)\\)\\s*\\{"));
                string condition = match[1];
                string label_true = "L" + to_string(label_count++);
                string label_false = "L" + to_string(label_count++);
                emitQuad("if", condition, "", label_true);  // 如果条件成立，跳转到label_true
                emitQuad("jump", label_false, "", "");  // 否则跳转到label_false
                emitQuad("label", label_true, "", "");
            }
            // 匹配for循环
            else if (regex_match(line, regex("^for\\s*\\((.*);\\s*(.*);\\s*(.*)\\)\\s*\\{"))) {
                smatch match;
                regex_match(line, match, regex("^for\\s*\\((.*);\\s*(.*);\\s*(.*)\\)\\s*\\{"));
                string init = match[1];          // 初始化部分
                string condition = match[2];     // 条件判断部分
                string increment = match[3];     // 增量部分
                string label_start = "L" + to_string(label_count++);
                string label_end = "L" + to_string(label_count++);
                string label_condition = "L" + to_string(label_count++);
                
                emitQuad("assign", init, "", "");  // 处理初始化语句
                emitQuad("label", label_start, "", "");  // 循环开始标签
                emitQuad("if", condition, "", label_end);  // 判断条件
                emitQuad("jump", label_condition, "", "");  // 如果条件不成立，跳转到结束标签
                emitQuad("label", label_end, "", "");  // 循环结束标签
                emitQuad("assign", increment, "", "");  // 执行增量操作
                emitQuad("jump", label_start, "", "");  // 跳回到循环开始，继续判断条件
                emitQuad("label", label_condition, "", "");  // 增量后的标签
            }
            // 匹配函数调用
            else if (regex_match(line, regex("^([a-zA-Z_][a-zA-Z0-9_]*)\\s*\\((.*)\\)\\s*;"))) {
                smatch match;
                regex_match(line, match, regex("^([a-zA-Z_][a-zA-Z0-9_]*)\\s*\\((.*)\\)\\s*;"));
                string function = match[1];
                string args = match[2];
                emitQuad("call", function, args, "");
            }

            line_number++;
        }
    }

    void emitQuad(const string& operator_, const string& operand1, const string& operand2, const string& result) {
        Quadruple quad = {operator_, operand1, operand2, result};
        quadruples.push_back(quad);
    }

    void printQuads() {
        for (const auto& quad : quadruples) {
            output_file << "(" << quad.operator_ << ", " 
                        << quad.operand1 << ", " 
                        << quad.operand2 << ", " 
                        << quad.result << ")" << endl;
        }
    }

private:
    ifstream input_file;
    vector<Quadruple> quadruples;
    ofstream& output_file;  // 引用输出文件流

    // 去掉字符串首尾空格
    string trim(const string& str) {
        size_t first = str.find_first_not_of(" \t");
        size_t last = str.find_last_not_of(" \t");
        return (first == string::npos || last == string::npos) ? "" : str.substr(first, last - first + 1);
    }
};

extern TreeNode *root;
extern FILE *yyin;
extern int yyparse();

using namespace std;
int main(int argc, char *argv[])
{
    freopen("test.s", "w" , stdout);
    cout << ".bss\n";
    if (argc == 2)
    {
        FILE *fin = fopen(argv[1], "r");
        if (fin != nullptr)
        {
            yyin = fin;
        }
        else
        {
            cout << "failed to open file: " << argv[1] << endl;
        }
    }
    yyparse();
    if(root != NULL) {
		get_label(root);
        root->genNodeId();
        //root->printAST();
		root->gen_asm();
    }
    fclose(stdout);
    
    
    string filename = "/home/youxiaoye/下载/fin(1) (1)/fin/test.c";  
    ofstream output_file("/home/youxiaoye/下载/fin(1) (1)/fin/test.s", ios::app); 
    output_file <<endl;
    output_file <<"start printing IRcode."<<endl;
    CParser parser(filename, output_file);
    
    parser.parse();
    parser.printQuads();

    output_file.close();  // 关闭输出文件
    return 0;
}
