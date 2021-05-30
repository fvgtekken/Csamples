#include <stdio.h>

int factr(int n);

int main(void) {

    //printf("%d",factr(3));
    factr(5);
    return 0;
}
/* recursive */
int factr(int n) {
int answer;
if(n==1) {
    printf("%d\n", n);
    return(1);
} 
    /* recursive call */

    answer = factr(n-1)*n; 
    printf("%d\n", answer);
    return(answer);
}


/*
     24 * 5 -> 120
           6  *  4 -> 24
             2  *  3 -> 6  
                1 *  2 -> 2        
                    *  1 -> 1
*/                  