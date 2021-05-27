#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(void) {
    
    int x;
    int *p1, *p2;

    p1 = &x;
    p2 = p1;
    
    printf(" %p", p2); /* print the address of x, not x's value! */
    return 0;
}