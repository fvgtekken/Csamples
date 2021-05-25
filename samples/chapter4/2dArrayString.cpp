#include <iostream>
#include <string.h>


int main (void) {

    char fede[30][80];
    fede[0][0] = 'f';
    fede[0][1] = 'e';

    printf("%c", fede[0][0]);
    printf("%c", fede[0][1]);

    return 0;
}