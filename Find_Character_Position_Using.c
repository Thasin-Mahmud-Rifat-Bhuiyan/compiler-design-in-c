#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "bclbds";
  int pos = strcspn(str, "a");

  printf("Found in index : %d\n", pos);

  return 0;
}