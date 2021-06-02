#include <stdio.h>
int main(void) {
struct Chapota {
   int a;
   int b;
} x, y;

x.a = 10;
y = x; /* assign one structure to another */

printf("%d", y.a);
return 0;

}