
#include <iostream>
#include <stdio.h> 
#include <string.h>


/*
This makes room for the null at the end of the string.
When you use a quoted string constant in your program, you are also creating a
null-terminated string. A string constant is a list of characters enclosed in double quotes.*/




int main (void) {
    int i;

  /*
  The size of the left index determines the number of strings and the size of the right
  index specifies the maximum length of each string. The following code declares an array
  of 6 strings, each with a maximum length of 13 characters, plus the null terminator.  
  */

    const char str[6][13] = {"Federico", "El yanque"}; //This makes room for the null at the end of the string
   
    
    // printf("fefefef");
     printf("%d\n esto es el lenght", strlen(str[0]));
     printf("%c\n", str[1][0]);
    
    for(i = 0; i<strlen(str[1]); i++) {
        
            printf("%c", str[1][i]);

        // printf("%s", "in FOR!");
      //   printf("%c", str[i]);
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