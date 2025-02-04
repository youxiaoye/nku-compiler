#ifndef TREE_H
#define TREE_H

#include "pch.h"
#include "type.h"
#include<cstring>
#include<map>
struct TreeNode;
struct Label;
void get_label(TreeNode* t);
void recursive_get_label(TreeNode*t);
void stmt_get_label(TreeNode* t);
struct Label
{
	string begin_label,true_label,next_label,false_label;
	Label(){begin_label=true_label=next_label=false_label="";}
};

enum NodeType
{
    NODE_CONST, 
    NODE_VAR,
    NODE_EXPR,
    NODE_TYPE,
    NODE_STMT,
    NODE_PROG,
	NODE_FUNC,
	NODE_IDLIST,
	NODE_NOTHING,
};

enum OperatorType
{
    OP_EQ,  // ==
	OP_DIV,
	OP_MINUS,
	OP_PLUS,
	OP_NEQUAL,
	OP_MUL,
	OP_BIGGER,
	OP_LESS,
	OP_BIGGERE,
	OP_LESSE,
	OP_BIGGEREQUAL,
	OP_LESSEQUAL,
	OP_NOT,
	OP_AND,
	OP_OR,
	OP_EQUAL,
	OP_SELFPLUS,
	OP_MOD,
	OP_PLUSE,
	OP_MINUSE,
	OP_P,
	OP_M,
	OP_PP,
	OP_MM,
};

enum StmtType {
    STMT_SKIP,
    STMT_DECL,
	STMT_ASSIGN,
	STMT_WHILE,
	STMT_IFBODY,
	STMT_IF,
	STMT_ELSEIF,
	STMT_ELSE,
	STMTS,
	STMT_FOR,
	STMT_PRINTF,
	STMT_SCANF,
	STMT_FORCON,
	STMT_CON,
}
;

struct TreeNode {
public:
    int nodeID;  // 用于作业的序号输出
    int lineno;
    NodeType nodeType;

    TreeNode* child = nullptr;
    TreeNode* sibling = nullptr;

    void addChild(TreeNode*);
    void addSibling(TreeNode*);
    
    void printNodeInfo();
    void printChildrenId();

    void printAST(); // 先输出自己 + 孩子们的id；再依次让每个孩子输出AST。
    void printSpecialInfo();

    void genNodeId();
	void gen_asm();
	int gen_node_asm();

	//void typeCheck();

public:
    OperatorType optype;  // 如果是表达式
    Type* type=nullptr;  // 变量、类型、表达式结点，有类型。
    StmtType stype;
    int int_val;
    char ch_val;
    bool b_val;
	int idnum;
	int stringid;
	Label label;
	string str_val;
    string var_name;
public:
    static string nodeType2String (NodeType type);
    static string opType2String (OperatorType type);
    static string sType2String (StmtType type);

public:
    TreeNode(int lineno, NodeType type);
};

#endif
