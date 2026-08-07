#include <stdio.h>
#include<string.h>
int main ()
{
    char str1 [100];
    char str2 [100];
    int result;

    printf("Enter First String: ");
    gets (str1);
    printf("Enter Second String: ");
    gets (str2);

    result = strcmp(str1,str2);

    if (result == 0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}
