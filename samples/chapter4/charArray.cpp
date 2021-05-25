
#include <iostream>
#include <stdio.h> 
#include <string.h>


/*
This makes room for the null at the end of the string.
When you use a quoted string constant in your program, you are also creating a
null-terminated string. A string constant is a list of characters enclosed in double quotes.*/

int main (void) {
    int i;
    char str[6]; //This makes room for the null at the end of the string
    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    

    printf("%d\n", strlen(str));
    printf("%c\n", str[0]);
    
    for(i = 0; i<strlen(str); i++) {
        // printf("%s", "in FOR!");
         printf("%c", str[i]);
    }
    
    return 0;
}


/*

Here Are Some classes that are useful for arrays
strcpy(s1, s2) Copies s2 into s1.
strcat(s1, s2) Concatenates s2 onto the end of s1.
strlen(s1) Returns the length of s1.
strcmp(s1, s2) Returns 0 if s1 and s2 are the same; less than 0 if s1<s2;
greater than 0 if s1>s2.
strchr(s1, ch) Returns a pointer to the first occurrence of ch in s1.
strstr(s1, s2) Returns a pointer to the first occurrence of s2 in s1.

These functions use the standard header file string.h. (C++ programs can also use the
C++-style header <cstring>.) The following program illustrates the use of these string
functions:

*/