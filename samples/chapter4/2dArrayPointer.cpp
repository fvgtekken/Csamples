#include <iostream>
#include <string.h>


int main (void) {

    int a[4][4];
    a[0][0] = 149;
    a[0][2] = 150;

    printf("%d\n", a[0][0]);
    printf("%d\n", a[0][2]);
    printf("%s\n", "Using Pointers to assing a value");

    /*
    The cast of the pointer to the array 
    into a pointer of its base type is necessary in order
    for the pointer arithmetic to operate properly. 
    Pointers are sometimes used to access
    arrays because pointer arithmetic is often faster than array indexing.
    */
    // is like  a[0][0], a[0][2], a[0][3]
    *((int *)a+0) = 150;
    *((int *)a+0+2) = 151;
    *((int *)a+0+3) = 152;


    printf("%d\n", a[0][0]);
    printf("%d\n", a[0][2]);
    printf("%d\n", a[0][3]);

    return 0;
}