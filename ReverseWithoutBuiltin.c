#include<stdio.h>
#include<string.h>
int main ()
{
    char str1 [100];

    printf("Enter the Sentence: ");
    gets (str1);

    strrev(str1);

    printf("Reversed Sentence is: %s",str1);
}
