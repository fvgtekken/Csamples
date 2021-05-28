#include <iostream>
#include <stdlib.h>
using namespace std;

void displayArray(char *s);

int main (void) {
    
    /*
    Pointers may be arrayed like any other data type. The declaration for an int pointer
    array of size 10 is
    */ 
    int arrSize, i;

    char *x[10], str[3];
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
  
    arrSize = sizeof(str)/sizeof(str[0]);
    //cout << "The size of the array is: " << arrSize;
    printf("Lenght of Array: %d", arrSize);


   /*
   To assign the address of an integer variable 
   called var to the third element of the
   pointer array, write
   */
   
  for(i = 0; i<arrSize; i++ ){
      x[i] = &str[i];
      printf("Estas son las direcciones yanques del array pointer:\n");
      printf("Memory Address %d: %d\n",i, x[i]);
  }
    
  return 0;
}


void displayArray(int *q[]) {
    int t;
    for(t=0; t<10; t++)
    printf("%d ", *q[t]);
}