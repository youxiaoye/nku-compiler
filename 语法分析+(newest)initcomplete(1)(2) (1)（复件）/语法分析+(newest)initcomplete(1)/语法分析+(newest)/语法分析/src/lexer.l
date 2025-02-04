%option noyywrap
%{
    #define YY_NO_UNPUT
    #define YY_NO_INPUT

    #include "parser.h"
    #include <ostream>
    #include <fstream>
    #include <string>
    #include <math.h>
    using namespace std;

    extern FILE *yyin; 
    extern FILE *yyout;
    extern bool dump_tokens;

    void DEBUG_FOR_LAB4(std::string s){
        std::string DEBUG_INFO =  s + "\n";
        fputs(DEBUG_INFO.c_str(), yyout);
    }
%}

DECIMIAL ([1-9][0-9]*|0)
HEX (0x[1-9|A-F|a-f][0-9|A-F|a-f]*|0x0)
OCT (0[1-7][0-7]*|00)
ID [[:alpha:]_][[:alpha:][:digit:]_]* 
char ('.')
EOL (\r\n|\n|\r)
WHITE [\t ]

LINECOMMENT \/\/[^\n]* 
COMMENTBEIGN "/*" 
COMMENTELEMENT . 
COMMENTLINE (\r\n|\n|\r)
COMMENTEND "*/"
%x BLOCKCOMMENT

%%

{LINECOMMENT}

{COMMENTBEIGN} {BEGIN BLOCKCOMMENT;}
<BLOCKCOMMENT>{COMMENTELEMENT} {}
<BLOCKCOMMENT>{COMMENTLINE} {yylineno++;}
<BLOCKCOMMENT>{COMMENTEND} {BEGIN INITIAL;}

"int" { 
    if(dump_tokens)
        DEBUG_FOR_LAB4("INT\tint");
    return INT;
}
"void" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("VOID\tvoid");
    return VOID;
}
"char" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("CHAR\tchar");
    return CHAR;
}
"for" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("FOR\tfor");
    return FOR;
}
"if" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("IF\tif");
    return IF;
};
"else" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("ELSE\telse");
    return ELSE;
};
"return" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("RETURN\treturn");
    return RETURN;
}

"while" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("WHILE\twhile");
    return WHILE;
}

"break" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("BREAK\tbreak");
    return BREAK;
}
"continue" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("CONTINUE\tcontinue");
    return CONTINUE;
}

"const" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("CONST\tconst");
    return CONST;
}
"==" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("EQUAL\t==");
    return EQUAL;
}
"=" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("ASSIGN\t=");
    return ASSIGN;
}
">=" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("MOREEQUAL\t>=");
    return MOREEQUAL;
}
"<=" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("LESSEQUAL\t<=");
    return LESSEQUAL;
}
"!=" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("NOEQUAL\t!=");
    return NOEQUAL;
}
"<" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("LESS\t<");
    return LESS;
}
">" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("MORE\t>");
    return MORE;
}
"++" {
    if (dump_tokens) {
        DEBUG_FOR_LAB4("PLUSPLUS\t++");
    }
    return PLUSPLUS;
}

"--" {
    if (dump_tokens) {
        DEBUG_FOR_LAB4("MINUSMINUS\t--");
    }
    return MINUSMINUS;
}

"+" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("ADD\t+");
    return ADD;
}
"-" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("SUB\t-");
    return SUB;
}
"*" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("MUL\t*");
    return MUL;
}
"/" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("DIV\t/");
    return DIV;
}
"%" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("PERC\t%");
    return PERC;
}
";" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("SEMICOLON\t;");
    return SEMICOLON;
}
"&&" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("AND\t&&");
    return AND;
}
"||" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("OR\t||");
    return OR;
}
"(" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("LPAREN\t(");
    return LPAREN;
}
")" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("RPAREN\t)");
    return RPAREN;
}
"{" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("LBRACE\t{");
    return LBRACE;
}
"}" {
    if(dump_tokens)
        DEBUG_FOR_LAB4("RBRACE\t}");
    return RBRACE;
}

"," {
    if(dump_tokens)
        DEBUG_FOR_LAB4("COMMA\tcomma");
    return COMMA;
}


"-"{DECIMIAL} {
    if (dump_tokens)
        DEBUG_FOR_LAB4(yytext);
    yylval.itype = -atoi(yytext + 1);  // 跳过负号
    return INTEGER;
}

{DECIMIAL} {
    if(dump_tokens)
        DEBUG_FOR_LAB4(yytext);
    yylval.itype = atoi(yytext);
    return INTEGER;
}

"-"{HEX} {
    if (dump_tokens)
        DEBUG_FOR_LAB4(yytext);
    int all = 0;
    string a = yytext + 1;  // 跳过负号
    int len = a.length() - 2;
    for (int i = 0; i < len; i++) {
        int temp1 = (pow(16, (len - i - 1)));
        int temp2;
        if (a[i + 2] >= '0' && a[i + 2] <= '9') {
            temp2 = a[i + 2] - '0';
        } else if (a[i + 2] >= 'A' && a[i + 2] <= 'F') {
            temp2 = a[i + 2] - 'A' + 10;
        } else if (a[i + 2] >= 'a' && a[i + 2] <= 'f') {
            temp2 = a[i + 2] - 'a' + 10;
        }
        all += temp1 * temp2;
    }
    yylval.itype = -all;
    return INTEGER;
}

{HEX} {
    if(dump_tokens)
        DEBUG_FOR_LAB4(yytext);
    int all = 0;
    string a  = yytext;
    int len = a.length() - 2;
    for(int i = 0; i < len; i++) {
        int temp1 = (pow(16, (len - i - 1)));
        int temp2;
        if(a[i + 2] >= '0' && a[i + 2] <= '9'){
            temp2 = a[i + 2] - '0';
        } else if(a[i + 2] >= 'A' && a[i + 2] <= 'F'){
            temp2 = a[i + 2] - 'A' + 10;
        } else if(a[i + 2] >= 'a' && a[i + 2] <= 'f'){
            temp2 = a[i + 2] - 'a' + 10;
        }
        all += temp1 * temp2;         
    }
    yylval.itype = all;
    return INTEGER;
}

"-"{OCT} {
    if (dump_tokens)
        DEBUG_FOR_LAB4(yytext);
    string a = yytext + 1;  // 跳过负号
    int len = a.length() - 1;
    int all = 0;
    for (int i = 0; i < len; i++) {
        int temp1 = (pow(8, (len - i - 1)));
        int temp2 = a[i + 1] - '0';
        all += temp1 * temp2;
    }
    yylval.itype = -all;
    return INTEGER;
}

{OCT} {
    if(dump_tokens)
        DEBUG_FOR_LAB4(yytext);
    string a  = yytext;
    int len = a.length() - 1;
    int all = 0;
    for(int i = 0; i < len; i++) {
        int temp1 = (pow(8, (len - i - 1)));
        int temp2 = a[i + 1] - '0';
        all += temp1 * temp2;         
    }
    yylval.itype = all;
    return INTEGER;
}

{ID} {
    if(dump_tokens)
        DEBUG_FOR_LAB4(yytext);
    char *lexeme;
    lexeme = new char[strlen(yytext) + 1];
    strcpy(lexeme, yytext);
    yylval.strtype = lexeme;
    return ID;
}
{EOL} yylineno++;
{WHITE}

%%

