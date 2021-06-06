#include <stdio.h>
int main(void) {

int x1 = 10, x2 = 11, x3 = 12, sum;
int *p1;

p1 = &x1;
 //p1+1;

printf("%d", (p1)); /* print the address of x, not x's value! */
return 0;

}