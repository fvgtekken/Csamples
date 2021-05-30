#include <stdio.h>

int find_substr(const char *s1, const char *s2);

int main(void) {
    
    if(find_substr("C++ is fun", "is") != -1) {
        printf("substring is found");   
    }
    return 0;
}


/* Return index of first match of s2 in s1. */
int find_substr(const char *s1, const char *s2) {
register int t;
char *p, *p2;



printf("%c", *s2);

    return -1;
}