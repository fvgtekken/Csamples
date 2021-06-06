#include <stdio.h>
int main(void) {

    int x1 = 10, x2 = 11, x3 = 12, sum;
    int *p1, *p2;

    p1 = &x1;
    p2 = p1;
    p1 = p1+1;
   

    printf("esto es p1, %d\n", (p1)); 
    printf("esto es p2, %d\n", (p2));

    if(p1==p2){
        printf("Los Dos Operadores son chipotes!");
    } else {
         printf("Los Dos Operadores NO son chipotes!");
    }

    return 0;

}