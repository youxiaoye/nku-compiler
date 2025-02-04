%{
    #include "common.h"
    #define YYSTYPE TreeNode *  
	#include<queue>
	#include<vector>
	#include<map>
	map<char*, int> idli;
    TreeNode* root;
    extern int lineno;
    int yylex();
    int yyerror( char const * );
%}
%token T_CHAR T_INT T_STRING T_BOOL VOID
%token LOP_ASSIGN COMMA L R CL CR
%token SEMICOLON
%token IDENTIFIER INTEGER CHAR BOOL STRING WHILE IF ELSE FOR PRINTF SCANF RETURN 

%left PLUSE MINUSE 
%left OR
%left LOP_EQ EQUAL NEQUAL
%left BIGGER LESS BIGGERE LESSE
%left PLUS MINUS
%left MUL DIV MOD
%right AND NOT PP MM QU
%%

program
: statements functions{root = new TreeNode(0, NODE_PROG); root->addChild($2);root->addChild($1);}
| functions{root = new TreeNode(0, NODE_PROG); root->addChild($1);}
;


functions
:function{$$=$1;}
|functions function{$$=$1;$$->addSibling($2);}
;

function
:T IDENTIFIER CL CR L statements R{$$=new TreeNode(lineno, NODE_FUNC);$$->addChild($1);$$->addChild($2);$$->addChild($6);}

statements
:  statement {$$=$1;}
|  statements statement {$$=$1;$$->addSibling($2);}
;

statement
: SEMICOLON  {$$ = new TreeNode(lineno, NODE_STMT); $$->stype = STMT_SKIP;}
| expr SEMICOLON{$$ = $1;}
| declaration SEMICOLON {$$ = $1;}
| assign SEMICOLON {$$=$1;}
| while {$$=$1;}
| if {$$=$1;}
| L statements R {$$ = new TreeNode(lineno, NODE_STMT); $$->stype = STMTS;$$->addChild($2);}
| L R {$$ = new TreeNode(lineno, NODE_STMT);}
| for{$$=$1;}
| scanf SEMICOLON{$$=$1;}
| printf SEMICOLON{$$=$1;}
| RETURN expr SEMICOLON{$$=$2;}
;

scanf
:SCANF CL scanbodys CR{$$ = new TreeNode(lineno, NODE_STMT); $$->stype = STMT_SCANF;$$->addChild($3);}
;

scanbodys
:scanbody {$$=$1;}
|scanbodys COMMA scanbody {$$=$1;$$->addSibling($3);}
;
scanbody
:expr{$$=$1;}
|QU IDENTIFIER{$$=$2;}
;

printf
:PRINTF CL printfbodys CR{$$ = new TreeNode(lineno, NODE_STMT); $$->stype = STMT_PRINTF;$$->addChild($3);}
;

printfbodys
:printfbody {$$=$1;}
|printfbodys COMMA printfbody {$$=$1;$$->addSibling($3);}
;
printfbody
:expr{$$=$1;}
;

for
:FOR forcondition statement{
    $$ = new TreeNode(lineno, NODE_STMT);$$->stype = STMT_FOR;
    $$->addChild($2);
    $$->addChild($3);
    }
;

forcondition
: CL statement expr SEMICOLON assign CR{$$ = new TreeNode(lineno, NODE_STMT);$$->stype=STMT_FORCON;$$->addChild($2);$$->addChild($3);$$->addChild($5);}
| CL statement expr SEMICOLON expr CR{$$ = new TreeNode(lineno, NODE_STMT);$$->stype=STMT_FORCON;$$->addChild($2);$$->addChild($3);$$->addChild($5);}
;

if
:ifbody elsebody{$$ = new TreeNode(lineno, NODE_STMT); $$->stype = STMT_IFBODY;$$->addChild($1);$$->addChild($2);}
|ifbody{$$ = new TreeNode(lineno, NODE_STMT); $$->stype = STMT_IFBODY;$$->addChild($1);}
;


elsebody
:ELSE statement {$$ = new TreeNode(lineno, NODE_STMT);$$->stype = STMT_ELSE;$$->addChild($2);}
;


ifbody
:IF CL expr CR statement{$$ = new TreeNode(lineno, NODE_STMT); $$->stype = STMT_IF;$$->addChild($3);$$->addChild($5);}
;

while
:WHILE CL expr CR statement {$$ = new TreeNode(lineno, NODE_STMT); $$->stype =STMT_WHILE;$$->addChild($3);$$->addChild($5);}
;

assign
:IDENTIFIER LOP_ASSIGN expr{
    $$ = new TreeNode($1->lineno, NODE_STMT);
    $$->stype = STMT_ASSIGN;
    $$->addChild($1);
	$$->addChild($3);
}

declaration
:T decs{
	TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
	node->stype = STMT_DECL;
	node->addChild($1);
	node->addChild($2);
	$$=node;
}
;

decs
: singledec{$$=new TreeNode($1->lineno, NODE_IDLIST);$$->addChild($1);}
| singledec COMMA decs{
	$$=new TreeNode($1->lineno, NODE_IDLIST);
	$$->addChild($1);
	$$->addChild($3);
}
;

singledec
:IDENTIFIER LOP_ASSIGN expr{
    TreeNode* node = new TreeNode($1->lineno, NODE_STMT);
    node->stype = STMT_ASSIGN;
    node->addChild($1);
    node->addChild($3);
    $$ = node;} 
|IDENTIFIER {
    $$ = $1;
} 
;

expr
: IDENTIFIER {
    $$ = $1;
}
| INTEGER {
    $$ = $1;
}
| CHAR {
    $$ = $1;
}
| STRING {
    $$ = $1;
}
|IDENTIFIER PP{$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_PP;$$->addChild($1);$$->type=$1->type;}
|IDENTIFIER MM{$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_PP;$$->addChild($1);$$->type=$1->type;}
|PP IDENTIFIER{$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_P;$$->addChild($2);$$->type=$2->type;}
|MM IDENTIFIER{$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_M;$$->addChild($2);$$->type=$2->type;}
|IDENTIFIER PLUSE expr {$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_PLUSE;$$->addChild($1);$$->addChild($3);$$->type=$1->type;}
|IDENTIFIER MINUSE expr {$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_MINUSE;$$->addChild($1);$$->addChild($3);$$->type=$1->type;}
|expr EQUAL expr {$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_EQUAL;$$->addChild($1);$$->addChild($3);$$->type=TYPE_BOOL;}
|expr PLUS expr	{$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_PLUS;$$->addChild($1);$$->addChild($3);$$->type=$1->type;}
|expr MINUS expr	{$$ = new TreeNode(lineno, NODE_EXPR);$$->optype=OP_MINUS;$$->addChild($1);$$->addChild($3);$$->type=$1->type;}
|expr MUL expr	{$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_MUL;$$->addChild($1);$$->addChild($3);$$->type=$1->type;}
|expr DIV expr	{$$ = new TreeNode(lineno, NODE_EXPR);$$->optype=OP_DIV;$$->addChild($1);$$->addChild($3);$$->type=$1->type;}
|expr NEQUAL expr	{$$ = new TreeNode(lineno, NODE_EXPR);$$->optype=OP_NEQUAL;$$->addChild($1);$$->addChild($3);$$->type=TYPE_BOOL;}
|CL expr CR		{$$=$2;}
|expr BIGGER expr{$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_BIGGER;$$->addChild($1);$$->addChild($3);$$->type=TYPE_BOOL;}
|expr BIGGERE expr{$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_BIGGERE;$$->addChild($1);$$->addChild($3);$$->type=TYPE_BOOL;}
|expr LESS expr	{$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_LESS;$$->addChild($1);$$->addChild($3);$$->type=TYPE_BOOL;}
|expr LESSE expr	{$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_LESSE;$$->addChild($1);$$->addChild($3);$$->type=TYPE_BOOL;}
|NOT expr	{$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_NOT;$$->addChild($2);$$->type=TYPE_BOOL;}
|expr AND expr	{$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_AND;$$->addChild($1);$$->addChild($3);$$->type=TYPE_BOOL;}
|expr OR expr	{$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_OR;$$->addChild($1);$$->addChild($3);$$->type=TYPE_BOOL;}
|expr MOD expr	{$$= new TreeNode(lineno, NODE_EXPR);$$->optype=OP_MOD;$$->addChild($1);$$->addChild($3);$$->type=$1->type;}
|MINUS expr {$$ = new TreeNode(lineno, NODE_EXPR);$$->optype=OP_MINUS;TreeNode*temp=new TreeNode(lineno, NODE_CONST);
    temp->type =TYPE_INT;temp->int_val = 0;$$->addChild(temp);$$->addChild($2);$$->type=$2->type;}
;

T: T_INT {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_INT;} 
| T_CHAR {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_CHAR;}
| T_BOOL {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_BOOL;}
| VOID {$$ = new TreeNode(lineno, NODE_TYPE); $$->type = TYPE_UNKNOW;}
;

%%

int yyerror(char const* message)
{
  cout << message << " at line " << lineno << endl;
  return -1;
}
