#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(void) {

/* Single-dimension arrays are essentially lists of information of the same type that
are stored in contiguous memory locations in index order. For example, Figure 4-1
shows how array a appears in memory if it starts at memory location 1000 and is
declared as shown here: */

 
 char p[10]; 
 double balance[100];
 int x[100];

 p[0] = 'd';
 x[0] = 55;
 balance[1] = 12.36;
  
 printf("%d\n", x[0]);
 
 //for printf: %f is double, %Lf is long double.
 printf("%f\n", balance[1]);
 printf("%c\n", p[0]);

 return 0;

}
