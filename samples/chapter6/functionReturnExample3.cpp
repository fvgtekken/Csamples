#include <stdio.h>
char *match( char c, char *s); /* prototype */
int main(void) {

    char s[80], *p, ch;
    gets(s);
    ch = getchar();
    p = match(ch, s);

if(*p) {
    printf("%s ", p);
} else {
    printf("No match found.");
}
    return 0;
}

/* Return pointer of first occurrence of c in s. */

char *match( char c,  char *s) {
    while(c!=*s && *s){
       s++;  
    }
    return(s);
}