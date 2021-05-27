#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;



int main(void) {
    double x = 100.1, y;
    double *p;
    
    /* The next statement causes p (which is an
    integer pointer) to point to a double. */
    p = (double *)&x;
    
    /* The next statement does not operate as
    expected. */
    
    y = *p;
    
    printf("%f", y); /* won't output 100.1 */
    return 0;
}