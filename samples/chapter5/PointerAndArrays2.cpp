#include <iostream>
#include <stdlib.h>

void putstrArray(char *s);
void putstrPointer(char *s); 

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
    
    putstrArray(str);
    putstrPointer(str);

    return 0;
}

/* Index s as an array. */
void putstrArray(char *s) {
    register int t;
    for(t=0; s[t]; ++t) putchar(s[t]);
}


/* Access s as a pointer. */
void putstrPointer(char *s) {
    while(*s) putchar(*s++);
}