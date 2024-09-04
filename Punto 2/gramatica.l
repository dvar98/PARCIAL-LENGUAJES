%{
#include <stdio.h>
#include <stdlib.h>
%}

%option noyywrap

LAMBDA "lambda"
VAR [a-zA-Z_][a-zA-Z0-9_]*
NUMBER [0-9]+
ADD ['+']
SUB ['-']
MUL ['*']
DIV ['/']
EXP ({TERM}((ADD|SUB){TERM})*)
TERM ({FACTOR}((MUL|DIV){FACTOR})*)
FACTOR ({VAR}|{NUMBER}|'(' {EXP} ')')

%%

{VAR}[[:blank:]]*=[[:blank:]]*{LAMBDA}[[:blank:]]*{VAR}:[[:blank:]]*(.*) { return 1; }

.|\n { printf("NO ACEPTA\n"); exit(0); }

%%

int main(int argc, char *argv[]) {
    extern FILE *yyin;
    extern int yylex();

    if (argc != 2) {
        fprintf(stderr, "Uso: %s archivo.txt\n", argv[0]);
        exit(1);
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror(argv[1]);
        return 1;
    }

    int token = yylex();
    if (token == 1) {
        printf("ACEPTA\n");
    }

    fclose(yyin);
    return 0;
}
