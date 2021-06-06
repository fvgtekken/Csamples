#include <stdio.h>
int main(void) {

int x = 10;
int *p1, *p2;

p1 = &x;
p2 = p1;

printf("%d", *p2); /* print the address of x, not x's value! */
return 0;

}