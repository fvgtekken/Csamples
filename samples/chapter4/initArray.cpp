#include <iostream>

int main (void) {

    /*
    The value_list is a comma-separated list of values 
    whose type is compatible with
    type_specifier. The first value is placed in the first 
    position of the array, the second value in the second position, and so on. 
    Note that a semicolon follows the }.
    In the following example, a 10-element integer array is initialized with the numbers
    1 through 10
    */
   int t;
   int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   printf("%d", i[1]);
   
    /*
    Because null-terminated strings end with a null, 
    you must make sure that the array
    you declare is long enough to include the null. 
    This is why str is 11 characters long
    even though "I like C++" is only 10.
    */
   char str[11] = "I like C++";
   char str2[11] = {'I', ' ', 'l', 'i', 'k', 'e',' ', 'C',
    '+', '+', '\0'};

   for(t = 0; t<11; t++){
    printf("%c", str2[t]);
   }

   /*Multidimensional arrays are initialized 
   the same as single-dimension ones. 
   For example, the following initializes 
   sqrs with the numbers 1 through 10 and their squares.*/

    int sqrs[10][2] = {
                    1, 1,
                    2, 4,
                    3, 9,
                    4, 16,
                    5, 25,
                    6, 36,
                    7, 49,
                    8, 64,
                    9, 81,
                    10, 100
                };

    printf("%d\n", sqrs[0][0]);
    printf("%d\n", sqrs[0][1]);
    printf("%d\n", sqrs[9][0]);
    printf("%d\n", sqrs[9][1]);

   return 0;

}