%{

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>

#ifndef YYSTYPE
#define YYSTYPE double
#endif


char id_str[100];


struct SymbolEntry {
    char name[100];
    int value;
}symbolTable[100];
int symbolTableSize = 0;


bool find_symbol(char* name, double *value) {
    for (int i = 0; i < 100; i++) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            *value = symbolTable[i].value;
            return true;  
        }
    }
    return false;  
}


void add_symbol(char* name, double value) {
    for (int i = 0; i < symbolTableSize; i++) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].value = value;
            return;
        }
    }

    
    if (symbolTableSize < 100) {
        strcpy(symbolTable[symbolTableSize].name, name);
        symbolTable[symbolTableSize].value = value;
        symbolTableSize++;
    } else {
        fprintf(stderr, "符号表已满，无法添加更多变量。\n");
        exit(1);
    }
}

int yylex();
extern int yyparse();
FILE* yyin;
void yyerror(const char* s);
%}

%token '+' '-' '*' '/' '=' LPATTEN RPATTEN NUMBER ID
%left LPATTEN
%left '+' '-'
%left '*' '/'
%right UMINUS         
%right RPATTEN

%%

lines   :       lines expr '\n' { printf("%f\n", $2); }
        |       lines assignment '\n'
        |
        ;

assignment : ID '=' expr {
    double value = $3;
    add_symbol(id_str, value);
    printf("%s = %f\n", id_str, value);
}



expr    :       expr '+' expr   { $$=$1+$3; }
        |       expr '-' expr   { $$=$1-$3; }
        |       expr '*' expr   { $$=$1*$3; }
        |       expr '/' expr   { $$=$1/$3; }
        |       ID '=' expr {$$->value=$3;}
        |       LPATTEN expr RPATTEN      { $$ = $2; }
        |       '-' expr %prec UMINUS   { $$=-$2; }
        |       NUMBER { $$ = $1; }
		|       ID { double value; if (find_symbol(id_str, &value)) $$ = value; else { yyerror("未定义的变量"); $$ = 0; } }
        ;
%%



int yylex()
{
    
    int t;
    
   
    while ((t = getchar()) == ' ' || t == '\t') {
        continue;
    }
    
    
    if ((t >= '0' && t <= '9')) {
        int data = t - '0';
        while ((t = getchar()) && (t >= '0' && t <= '9')) {
            data = data * 10 + t - '0';
        }
        yylval = data;
        ungetc(t, stdin);
        return NUMBER;
    }
    
    
    if ((t >= 'a' && t <= 'z') || (t >= 'A' && t <= 'Z') || t == '_') {
        int index = 0;
        id_str[index++] = t;
        while ((t = getchar()) && ((t >= '0' && t <= '9') || t == '_')) {
            id_str[index++] = t;
        }
        id_str[index] = '\0';
        ungetc(t, stdin);
        return ID;
    }
    
    
    switch (t) {
        case '+':
            return '+';
        case '-':
            return '-';
        case '*':
            return '*';
        case '/':
            return '/';
        case '(':
            return LPATTEN;
        case ')':
            return RPATTEN;
        default:
            return t;  
    }
}

int main(void)
{
    yyin=stdin;
    do{
        yyparse();
    }while(!feof(yyin));
    return 0;
}
void yyerror(const char* s){
    fprintf(stderr,"Parse error: %s\n",s);
    exit(1);
}
