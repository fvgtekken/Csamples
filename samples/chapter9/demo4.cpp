#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

char str[80];
FILE *fp;

if((fp = fopen("TEST", "w")) == NULL) {
    printf("Cannot open file.\n");
    exit(1);
}

do {
    
    printf("Enter a string (CR to quit):\n");
    gets(str);
     /* add a newline */
    strcat(str, "\n");
    fputs(str, fp);

} while(*str!='\n');

 return 0;
}