#include <iostream>
#include <string.h>
using namespace std;
/*Atwo-dimensional array can be reduced to a pointer to an array of one-dimensional
arrays. Therefore, using a separate pointer variable is one easy way to use pointers
to access elements within a row of a two-dimensional array. The following function
illustrates this technique. It will print the contents of the specified row for the global
integer array num:*/

int num[10][10];
void pr_row(int j, int row_dimension, int *p);

int main(void) {
    
    int t = 0;

    for ( t = 0; t<11; t++ ){
        num[1][t] = t;
    }

    pr_row(0, 10, (int *) num); /* print first row */
    return 0;
}


void pr_row(int j, int row_dimension, int *p) {
    
    int t;
    /* get address of first
    element in row j */
   p = p + (j * row_dimension);

    for(t=0; t<row_dimension; ++t) {
        printf("%d", *(p+t));
    } 

}