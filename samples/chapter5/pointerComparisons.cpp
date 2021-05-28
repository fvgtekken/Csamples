#include <stdio.h>
#include <stdlib.h>


#define SIZE 3

void push(int i);
int pop(void);
int *tos, *p1, stack[SIZE];


int main(void) {
    
    int value;
    tos = stack; /* tos points to the top of stack */
    p1 = stack; /* initialize p1 */
   
    printf("%d estp es chipote pi\n5", p1);

    do {
        printf("Enter value: ");
        scanf("%d", &value);
        if(value!=0) {
            push(value);
        } else {
            printf(" Pop value on top is %d\n", pop()); 
        }
    } while(value!=-1);
    
    return 0;
}
void push(int i) {

    /* p1 is incremented, it
     will point to the next integer.*/
    p1++;
    
    printf("%d esto es p1\n" , p1);
    printf("%d esto es tos+size\n" , (tos+SIZE));
    printf("%d esto es tos\n" , (tos));
   

    if(p1 == (tos+SIZE)) {
        printf("Push Stack Overflow.\n");
        //exit(1);
    }

    *p1 = i;
}


int pop(void) {
    
    if(p1==tos) {
        printf("Stack Underflow.\n");
        //exit(1);
    }
    p1--;
    return *(p1+1);
}