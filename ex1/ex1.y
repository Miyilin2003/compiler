%{
/*********************************************
YACC file
基础程序
Date:2023/9/19
forked SherryXiye
**********************************************/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#ifndef YYSTYPE
#define YYSTYPE double
#endif
int yylex();
extern int yyparse();
FILE* yyin;
void yyerror(const char* s);
%}
//注意先后定义的优先级区别
%token ADD SUB MUL DIV 
%left ADD SUB
%left MUL DIV
%right UMINUS         

%%


lines   :       lines expr '\n' { printf("%f\n", $2); }
        |       lines '\n'
        |
        ;

expr  :   expr ADD expr {$$=$1+$3;}
      |  expr SUB expr {$$=$1-$3;}
      |  expr MUL expr {$$=$1*$3;}
      |  expr DIV expr {$$=$1/$3;}
      |  '(' expr ')'  {$$=$2;}
      |  SUB expr %prec UMINUS {$$=-$2;}
      |  NUMBER 
      ;
    
NUMBER  :       '0'         {$$=0.0;}
        |       '1'         {$$=1.0;}
        |       '2'         {$$=2.0;}
        |       '3'         {$$=3.0;}
        |       '4'         {$$=4.0;}
        |       '5'         {$$=5.0;}
        |       '6'         {$$=6.0;}
        |       '7'         {$$=7.0;}
        |       '8'         {$$=8.0;}
        |       '9'         {$$=9.0;}
        ;

%%

// programs section

int yylex()
{
    int t;
    t=getchar();
    if(isdigit(t))
 { 
  return t;
 }
  else{
    switch(t)
     { 
      case '+':
          return ADD;
      case '-':
          return SUB;
       case '*':
          return MUL;
       case '/':
          return DIV;
      default:
            return t;
     }
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

