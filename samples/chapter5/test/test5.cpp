
#include <stdio.h>
#include <stdlib.h>

/*
Here, p1 has been set to the address of the first array element in str. 
To access the fifth element in str, you could write
*/
char str[80], *p1;
void putstr(char *s);
void putstr2(char *s);

int main(void) {
str[0] = 'F';
str[1] = 'E';
str[2] = 'D';
str[3] = 'E';
str[4] = 'R';

p1 = str;

putstr(p1);
putstr2(p1);

}


/* Index s as an array. */
void putstr(char *s) {
register int t;
for(t=0; s[t]; ++t) putchar(s[t]);
}


/* Access s as a pointer. */
void putstr2(char *s) {
    printf("\n");
    while(*s) putchar(*s++);
}