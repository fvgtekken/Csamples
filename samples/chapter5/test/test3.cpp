
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int push(int i);
int pop(void);
int *tos, *p1, stack[SIZE];

int main(void) {

int value;
stack[0]=111;
stack[1]=222;
stack[2]=333;

tos = stack; /* tos points to the top of stack */
p1 = stack; /* initialize p1 */

//printf("Init Memory p1:%d\n ", p1);
tos = tos+1;

printf("Init Memory tos+Size:%d\n", *tos);


do {
    
    printf("Enter value: ");
    scanf("%d", &value);
    if(value!=0) {
        int chpote = push(value);
        printf("Success entered value: %d\n", chpote);
    } else {
        printf("value on top is %d\n", pop());
    }

} while(value !=-1 );

  return 0;
}

int push(int i) {

    p1++;
    if(p1==(tos+SIZE)) {
        printf("Address Memory p1:%d\n ", p1);
        printf("Address Memory tos+Size:%d\n", tos+SIZE);

        printf("Stack Overflow.\n");
        exit(1);
    }

    *p1 = i;
    return *p1;

}


int pop(void) {
    
    if(p1==tos) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    p1--;
    return *(p1+1);
}