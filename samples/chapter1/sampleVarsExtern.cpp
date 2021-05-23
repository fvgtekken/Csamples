#include <stdio.h>
int main(void)
{

    // The extern specifier is needed when
    // you want to use a variable that is declared later in the file.
    // There is an important use of extern that relates to mutiple-file programs.
    // In C/C++, a program can be spread across two or more files,
    // compiled separately, and then linked together

    // When this is the case, there must be some way of telling all the files about the
    // global variables required by the program.

    // The best (and most portable) way to do this
    // is to declare all of your global variables in one file and use extern declarations in the
    // other, as in Figure 2-1.

    extern int first, last; /* use global vars */
    printf("%d %d", first, last);
    return 0;
}
/* global definition of first and last */
int first = 10, last = 20;
