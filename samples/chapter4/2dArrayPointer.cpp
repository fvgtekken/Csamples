#include <iostream>
#include <string.h>


int main (void) {

    int a[4][4];
    a[0][0] = 149;
    a[1][0] = 150;

    printf("%d\n", a[0][0]);
    printf("%d\n", a[1][0]);
    printf("%s\n", "Using Pointers to assing a value");

    // is like  a[0][4]
    *((int *)a+0) = 150;
    *((int *)a+10) = 151;
    printf("%d\n", a[0][0]);
    printf("%d\n", a[1][0]);

    return 0;
}