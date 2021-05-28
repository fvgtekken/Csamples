#include <stdio.h>
int main(void) {
    
    int x, *p, **q;
    
    x = 10;
    p = &x;
    q = &p;
    
    printf("%d", **q); /* print the value of x */
    return 0;

}