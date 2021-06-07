
#include <stdio.h>
#include <stdlib.h>


char str[80], *p1;


int main(void) {
str[0] = 'F';
p1 = str;
printf("Init Memory tos+Size:%c\n", *p1);
return 0;
}
