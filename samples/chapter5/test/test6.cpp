#include <stdio.h>
int main(void) {

    /*
    In the case of a pointer to a pointer, 
    the first pointer contains the address of
    the second pointer, 
    which points to the object that contains the value desired.
    */

     /* print the value of x */
    int x, *p, **q;
    x = 10;
    p = &x;
    q = &p;
    printf("%d", **q);
    return 0;
}