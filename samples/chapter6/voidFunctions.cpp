#include <stdio.h>

void print_vertical(char *str); /* prototype */

int main(int argc, char *argv[]) {
if(argc > 1) print_vertical(argv[1]);
    return 0;
}

void print_vertical(char *str) {
  while(*str)
  printf("%c\n", *str++);
}
