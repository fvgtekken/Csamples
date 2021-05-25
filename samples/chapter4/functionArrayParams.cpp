
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

void func1(int *x); /*Pointer Array */
void func2(int x[10]); /* Sized Array */
void func3(int x[]); /* Unsized array */


int main (void) {

   int chapota[10];
   chapota[2] = 2; 

    func1(chapota);
    func2(chapota);
    func3(chapota);


   return 0;
}

void func1(int *x) {  /* pointer array*/

    printf("%d\n", x[2]);

}

void func2(int x[10]) {  /* sized Array*/
    printf("%d\n", x[2]);
}

void func3(int x[]) { /* unsized array*/
    printf("%d\n", x[2]);
    printf("%d\n", x[3]);
}

/*

All three declaration methods produce similar results because each tells the
compiler that an integer pointer is going to be received. The first declaration actually
uses a pointer. The second employs the standard array declaration. In the final version,
a modified version of an array declaration simply specifies that an array of type int of
some length is to be received. As you can see, the length of the array doesn't matter as
far as the function is concerned because C/C++ performs no bounds checking. In fact,
as far as the compiler is concerned,

*/
