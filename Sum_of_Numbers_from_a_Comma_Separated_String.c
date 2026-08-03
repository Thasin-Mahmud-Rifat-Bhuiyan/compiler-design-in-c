#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
  char str[] = "10,68,35,68,47,6000";
  int count = 0;

  char *token = strtok(str, ",");

  while (token != NULL) {
    count += atoi(token);

    token = strtok(NULL, ",");
  }

  printf("Number of words = %d\n", count);

  return 0;
}