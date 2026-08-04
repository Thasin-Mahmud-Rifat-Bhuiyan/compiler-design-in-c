#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int i = 0, vowel = 0, cons = 0;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  while (str[i] != '\0') {
    char ch = str[i];

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
      if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
          ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        vowel++;
      } else {
        cons++;
      }
    }

    i++;
  }

  printf("Number of vowels = %d\n", vowel);
  printf("Number of consonants = %d\n", cons);

  return 0;
}