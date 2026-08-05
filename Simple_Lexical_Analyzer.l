%{
#include <stdio.h>
%}

%%
"int"      { printf("Keyword\n"); }
"float"    { printf("Keyword\n"); }
"if"       { printf("Keyword\n"); }
"while"    { printf("Keyword\n"); }

[a-zA-Z_][a-zA-Z0-9_]*   { printf("Identifier\n"); }

[ \t\n]+                 ;
. {printf ("Wrong Input\n");}

                       
%%

int yywrap()
{
    return 1;
}

int main()
{
    yylex();
    return 0;
}