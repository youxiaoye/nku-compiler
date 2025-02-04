%option nounput
%{
#include "common.h"
#include "main.tab.h"  // yacc header
#include <vector>  // yacc header
#include <stack>
#include <cstring>
int lineno=1;
int idn=0;
int decl=0;
int fors=0;
bool first=true;
Type* crr=nullptr;
Type* idtype[2000];
int stringid=0;
int v=0;
string stringlist[2000];
stack<int> lastlist;
vector<string> idli;
%}
BLOCKCOMMENT \/\*([^\*^\/]*|[\*^\/*]*|[^\**\/]*)*\*\/
LINECOMMENT \/\/[^\n]*
EOL	(\r\n|\r|\n)
WHILTESPACE [[:blank:]]

INTEGER [0-9]+

CHAR \'\\?.?\'
STRING \".+\"

IDENTIFIER [[:alpha:]_][[:alpha:][:digit:]_]*
%x COMMENT
%%
{BLOCKCOMMENT}  /* do nothing */
{LINECOMMENT}  /* do nothing */

";" {if(decl==1)decl=0;return  SEMICOLON;}
"int" {decl=1;crr=TYPE_INT;return T_INT;}
"bool" {decl=1;crr=TYPE_BOOL;return T_BOOL;}
"char" {decl=1;crr=TYPE_CHAR;return T_CHAR;}
"void" {decl=1;v=1;crr=TYPE_UNKNOW;return T_CHAR;}
"printf" return PRINTF;
"scanf"	return SCANF;

"!=" return NEQUAL;
"==" return EQUAL;
"++" return PP;
"--" return MM;
"+=" return PLUSE;
"-=" return MINUSE;
">=" return BIGGERE;
"<=" return LESSE;
"=" return LOP_ASSIGN;
"," return COMMA;
"(" return CL;
")" return CR;
"/" return DIV;
"+" return PLUS;
"*" return MUL;
"-" return MINUS;
">" return BIGGER;
"<" return LESS;
"!" return NOT;
"&&" return AND;
"||" return OR;
"while" return WHILE;

"if" return IF;
"else" return ELSE;
"%" return MOD;
"&" return QU;
"for" {	fors=1;
	lastlist.push(idn);return FOR;
};

"return" {
	if(v==1)
	{
		cout<<"return type wrong!";
		exit(0);		
	}
	cout<<"\t.section .rodata\n";
	for(int i=0;i<=stringid-1;++i)
	{
		cout<<"STR"<<i<<":\n";
		cout<<"\t\t"<<".string "<<stringlist[i]<<endl;
	}
	return RETURN;
};

"}"	{
	int last=lastlist.top();
	for(;idn>last;idn--)
		idli.erase(idli.end()-1);
	lastlist.pop();
	return R;};

"{" {
	if(fors==1)
		fors=0;
	else
		lastlist.push(idn);
	return L;
};


{INTEGER} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type =TYPE_INT;
    node->int_val = atoi(yytext);
    yylval = node;
    return INTEGER;
}


{CHAR} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
    node->type =TYPE_CHAR;
	if(yytext[2]=='n')
		node->int_val=10;
	else if(yytext[2]=='t')
		node->int_val=9;
	else
    	node->int_val = yytext[1];
    yylval = node;
    return CHAR;
}

{STRING} {
    TreeNode* node = new TreeNode(lineno, NODE_CONST);
	node->type =TYPE_STRING;
    node->str_val = string(yytext);
    yylval = node;
	stringlist[stringid]=node->str_val;
	node->stringid=stringid;
	stringid++;
    return CHAR;
}


{IDENTIFIER} {
	if(first)
	{
		lastlist.push(0);
		first=false;
	}
    TreeNode* node = new TreeNode(lineno, NODE_VAR);
    node->var_name = string(yytext);
	node->type=TYPE_UNKNOW;
	if(decl==0)
	{
		
		int i;
		for(i=idn-1;i>=0;--i)
		{
			if(idli[i]==node->var_name)
				break;
		}
		if(i==-1)
		{
			cout<<"var "<<node->var_name<<" not define";
			exit(0);
		}
		node->idnum=i;
		node->type=idtype[node->idnum];
	}
	else
	{
		bool flag=false;
		for(int i=idn-1;i>=lastlist.top();--i)
		{
			if(idn==0)break;
			if(idli[i]==node->var_name)
			{
				flag=true;
				break;
			}
		}
		if(flag)
		{
			cout<<"var "<<node->var_name<<" redefine";
			exit(0);
		}

		idli.push_back(node->var_name);
		node->idnum=idn;
		node->type=crr;
		idtype[node->idnum]=node->type;
		if(idn!=0)
		{
			cout<<"\t\t.zero 4\n\t"<<idli[idn]<<idn<<":\n\t\t.align 4\n";
		}
		idn++;
	}
	 yylval = node;
	 if(string(yytext)=="main")decl=0;
    return IDENTIFIER;
}

{WHILTESPACE} /* do nothing */

{EOL} lineno++;

. {
    cerr << "[line "<< lineno <<" ] unknown character:" << yytext << endl;
}
%%
