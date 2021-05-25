#include <iostream>
#include <string.h>


int main (void) {

    int *p, i[10];
    p = i;
    p[5] = 100; /* assign using index */
    
    printf("%d\n", p[5]);
    printf("%s\n", "Assing new value using pointer!");
    *(p+5) = 200; /* assign using pointer arithmetic */

    printf("%d", p[5]);


    return 0;
}