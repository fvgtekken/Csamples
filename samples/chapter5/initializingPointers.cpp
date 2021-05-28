#include <stdio.h>
#include <string.h>
const char *p = "hello world";


int main(void) {

    register int t;

    /* print the string forward and backwards */
    printf(p);
    
    
    for(t=strlen(p)-1; t>-1; t--) printf("%c", p[t]);

    return 0;
}