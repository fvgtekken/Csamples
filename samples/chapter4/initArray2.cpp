#include <iostream>

int main (void) {

    char e1[12] = "Read error\n";
    char e2[13] = "Write error\n";
    char e3[18] = "Cannot open file\n";

    /* As you might guess, it is tedious to count 
    the characters in each message manually
    to determine the correct array dimension. 
    Fortunately, you can let the compiler 
    automatically calculate the dimensions of the arrays. 
    If, in an array initialization
    statement, the size of the array is not specified, 
    the C/C++ compiler automatically
    creates an array big enough to hold all the initializers present. 
    This is called an unsized
    array. Using this approach, 
    the message table becomes */

    char e1[] = "Read error\n";
    char e2[] = "Write error\n";
    char e3[] = "Cannot open file\n";

    printf("%c", e2[0]);
    printf("%c", e2[1]);
    printf("%s", e2);

    return 0;

}