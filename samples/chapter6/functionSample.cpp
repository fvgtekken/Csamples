#include <stdio.h>

int sqr(int x);

/*In this example, the value of the argument to sqr( ), 10, is copied into the parameter
x. When the assignment x = x*x takes place, only the local variable x is modified. The
variable t, used to call sqr( ), still has the value 10. Hence, the output is 100 10.
Remember that it is a copy of the value of the argument that is passed into the function.
What occurs inside the function has no effect on the variable used in the call.*/


int main(void) {
    int t=10;
    printf("%d %d", sqr(t), t);
    return 0;
}

int sqr(int x) {
    x = x*x;
    return(x);
}

