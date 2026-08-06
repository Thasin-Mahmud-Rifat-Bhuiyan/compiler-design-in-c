#include <stdio.h>
int main ()
{
    char ch = 'S';
    char word [20]= "SPL  Lab";


   printf("Using Percentage (%%)C: %c \n  ", ch);
    int i = 0;
    while (word[i] != '\0')
    {
        ch = word[i];
        printf ("%c", ch);
        i++;
    }
     printf("\n");
     printf("______________\n");
    printf("Word is: %s", word);
}
