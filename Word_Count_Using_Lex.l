%{
#include <stdio.h>
int word = 0;
%}

%%

[a-zA-Z]+    { word++; }

[ \t\n]+     ;

.            { printf("Wrong Input\n"); }

%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("Enter text:\n");
    yylex();
    printf("Total word = %d\n", word);

    return 0;
}