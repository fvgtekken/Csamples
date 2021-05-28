#include <iostream>
#include <stdlib.h>


int main (void) {
    
    char str[3], *p1;
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    //Here, p1 has been set to the address of the first array element in str.
    p1 = str;



    printf("%c printig pointer\n", *(p1+0));
    printf("%c printig pointer\n", *(p1+1));
    printf("%c printig pointer\n", *(p1+2));
    return 0;
}