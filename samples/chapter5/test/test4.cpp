
#include <stdio.h>
#include <stdlib.h>

/*
Here, p1 has been set to the address of the first array element in str. 
To access the fifth element in str, you could write
*/
char str[80], *p1;


int main(void) {
str[0] = 'F';
str[1] = 'E';
str[2] = 'D';
str[3] = 'E';
str[4] = 'R';

/*
(Recall
that an array name without an index returns the starting address of the array, which
is the address of the first element.)
Although the
standard array-indexing notation is sometimes easier to understand, pointer arithmetic
can be faster. Since speed is often a consideration in programming, C/C++ programmers
commonly use pointers to access array elements.

Since speed is often a consideration in programming, C/C++ programmers
commonly use pointers to access array elements.

*/

p1 = str;

// Access to the first Element
printf("Init Memory tos+Size:%c\n", *p1);

// Access to the fifth Element
printf("Init Memory tos+Size:%c\n", *(p1+4));

return 0;
}
