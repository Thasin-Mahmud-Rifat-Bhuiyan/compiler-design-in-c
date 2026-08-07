#include <stdio.h>
int main ()
{
    char str1 [100];
    char str2 [100];
    int i = 0;
    int j = 0;
    int flag = 0;

    printf("Enter First String: ");
    gets (str1);
    printf("Enter Second String: ");
    gets (str2);
    while (str1[i] != '\0' && str2[j] != '\0')
    {
        if (str1[i] != str2[j])
        {
             flag = 1;
             break ;
        }
        i++ ;
        j++;
}
          if (flag == 1)
          {
              puts("Strings are Not Equal");
          }
          else
          {
              puts("Strings are Equal");
          }



}
