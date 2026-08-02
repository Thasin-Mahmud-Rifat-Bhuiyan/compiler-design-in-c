#include <stdio.h>

int main() {
  char str1[100], str2[100];
  int i = 0, flag = 0;

  printf("Enter First String: ");
  fgets(str1, sizeof(str1), stdin);

  printf("Enter Second String: ");
  fgets(str2, sizeof(str2), stdin);

  // Compare character by character
  while (str1[i] != '\0' && str2[i] != '\0') {
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    i++;
  }

  if (flag == 1 || str1[i] != str2[i])
    printf("Strings are not equal\n");
  else
    printf("Strings are equal\n");

  return 0;
}