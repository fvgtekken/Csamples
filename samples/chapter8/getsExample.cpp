#include <stdio.h>
#include <string.h>

int main(void) {

    char str[80];
    gets(str);
    printf("Length is %d", strlen(str));
    return 0;

}


/*
The Basic I/O Functions
 See page 227 for more about about console functions

*/