%option noyywrap
%option nounput
%option noinput
%top{
    #include <string>
    #include <stdarg.h>
    #include <malloc.h>
    #include <unordered_map>
    #include "common.h"
    #include "parser.h"
    using namespace std;
}
%{
	extern dump_type_t dump_type;
    inline void dump_tokens(const char* format, ...){
        va_list args;
        va_start(args, format);
        if (dump_type == TOKENS)
            vfprintf(yyout, format, args);
        va_end(args);
    }

    /* Your code here, if desired (lab3). */
%}

/* definitions section */
 //八进制
OCTAL (0[0-7]+)           
 //十六进制
HEXADECIMAL (0[xX][0-9A-Fa-f]+)
DECIMIAL ([1-9][0-9]*|0)
DIGIT [0-9]
FLOAT (({DIGIT}+\.?{DIGIT}*)|({DIGIT}*\.?{DIGIT}+))
ID [[:alpha:]_][[:alpha:][:digit:]_]*
EOL (\r\n|\n|\r)
WHITE [\t ]
/*  Your code here (lab3). */
%x BLOCKCOMMENT            
 //块注释    
BLOCKCOMMENTBEGIN "/*"           
 //通配符+换行
BLOCKCOMMENTELEMENT .|\n         
BLOCKCOMMENTEND "*/" 
 //行注释：以双斜杠开头，后跟若干个非换行的字符
LINECOMMENT \/\/[^\n]*

%%

"int" {
    dump_tokens("INT\t%s\n", yytext);
    return INT;
}
"void" {
    dump_tokens("VOID\t%s\n", yytext);
    return VOID;
}
"array" {
    dump_tokens("ARRAY\t%s\n", yytext);
    return ARRAY;
}
"const" {
    dump_tokens("CONST\t%s\n", yytext);
    return CONST;
}
"if" {
    dump_tokens("IF\t%s\n", yytext);
    return IF;
}
"else" {
    dump_tokens("ELSE\t%s\n", yytext);
    return ELSE;
}

"return" {
    dump_tokens("RETURN\t%s\n", yytext);
    return RETURN;
}

"while" {
    dump_tokens("WHILE\t%s\n", yytext);
    return WHILE;
}

"break" {
    dump_tokens("BREAK\t%s\n", yytext);
    return BREAK;
}

"continue" {
    dump_tokens("CONTINUE\t%s\n", yytext);
    return CONTINUE;
}

"==" {
    dump_tokens("EQUAL\t%s\n", yytext);
    return EQUAL;
}

"!=" {
    dump_tokens("NOTEQUAL\t%s\n", yytext);
    return NOTEQUAL;
}

"=" {
    dump_tokens("ASSIGN\t%s\n", yytext);
    return ASSIGN;
}

"<" {
    dump_tokens("LESS\t%s\n", yytext);
    return LESS;
}

"<=" {
    dump_tokens("LESSEQUAL\t%s\n", yytext);
    return LESSEQUAL;
}

">" {
    dump_tokens("GREATER\t%s\n", yytext);
    return GREATER;
}

">=" {
    dump_tokens("GREATEREQUAL\t%s\n", yytext);
    return GREATEREQUAL;
}

"+" {
    dump_tokens("ADD\t%s\n", yytext);
    return ADD;
}

"-" {
    dump_tokens("SUB\t%s\n", yytext);
    return SUB;
}

"*" {
    dump_tokens("MUL\t%s\n", yytext);
    return MUL;
}

"/" {
    dump_tokens("DIV\t%s\n", yytext);
    return DIV;
}

"%" {
    dump_tokens("MOD\t%s\n", yytext);
    return MOD;
}

"&&" {
    dump_tokens("AND\t%s\n", yytext);
    return AND;
}

"||" {
    dump_tokens("OR\t%s\n", yytext);
    return OR;
}

"!" {
    dump_tokens("NOT\t%s\n", yytext);
    return NOT;
}

";" {
    dump_tokens("SEMICOLON\t%s\n", yytext);
    return SEMICOLON;
}

"(" {
    dump_tokens("LPAREN\t%s\n", yytext);
    return LPAREN;
}

")" {
    dump_tokens("RPAREN\t%s\n", yytext);
    return RPAREN;
}

"{" {
    dump_tokens("LBRACE\t%s\n", yytext);
    return LBRACE;
}

"}" {
    dump_tokens("RBRACE\t%s\n", yytext);
    return RBRACE;
}

"[" {
    dump_tokens("LBRACKET\t%s\n", yytext);
    return LBRACKET;
}

"]" {
    dump_tokens("RBRACKET\t%s\n", yytext);
    return RBRACKET;
}

"," {
    dump_tokens("COMMA\t%s\n", yytext);
    return COMMA;
}


{DECIMIAL} {
    
    dump_tokens("NUMBER\t%s\n",yytext);
    //INTEGER这个单词的属性值类型（语义类型）为itype（int类型），其属性就是整数值，后面同
    //atoi将字符串转为整形
    yylval.itype = atoi(yytext);
    return INTEGER;
}
{OCTAL} {
    int num;
    //sscanf()会将参数str的字符串根据参数format字符串来转换并格式化数据
    sscanf(yytext, "%o", &num);
    dump_tokens("NUMBER\t%s\n",yytext);
    yylval.itype = num;
    return INTEGER;
}
{HEXADECIMAL} {
    int num;
    sscanf(yytext, "%x", &num);
    dump_tokens("NUMBER\t%s\n",yytext);
    yylval.itype = num;
    return INTEGER;
}


{ID} {
    dump_tokens("\t%s\n",yytext);
    char *lexeme;
    lexeme = new char[strlen(yytext) + 1];
    strcpy(lexeme, yytext);
    //ID这个单词的属性值类型（语义类型）为strtype（char*类型），其属性就是词素
    yylval.strtype = lexeme;
    return ID;
}
<*>{EOL} {              // EOL回车换行符
    yylineno++;
}
{WHITE} {}
{LINECOMMENT} {}   //处理注释，使用定义好的独占状态BLOCKCOMMENT
{BLOCKCOMMENTBEGIN} {BEGIN BLOCKCOMMENT;}
<BLOCKCOMMENT>{BLOCKCOMMENTELEMENT} {}
<BLOCKCOMMENT>{BLOCKCOMMENTEND} {BEGIN INITIAL;} //使用宏BEGIN来切换状态，初始状态默认为INITIAL 

%%

