#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "C programming is a language";
  int count = 0;

  char *token = strtok(str, " ");

  while (token != NULL) {
    count++;

    token = strtok(NULL, " ");
  }

  printf("Number of words = %d\n", count);

  return 0;
}