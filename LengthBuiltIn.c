#include <stdio.h>
#include<string.h>
int main ()
{
    char str1 [100];
    int length ;
    printf("Enter the Sentence: ");
    gets (str1);

    length = strlen(str1);
    //puts("Length is: ");
    printf("Length is: %d",length);
}
