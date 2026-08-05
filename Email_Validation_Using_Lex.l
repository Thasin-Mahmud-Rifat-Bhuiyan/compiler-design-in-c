%{
#include <stdio.h>
%}

%%

[a-zA-Z0-9._]+@[a-zA-Z0-9.-]+\.[a-zA-Z]+   { printf("Valid Email\n"); }

.|\n                                      ;

%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("Enter Email:\n");
    yylex();

    return 0;
}