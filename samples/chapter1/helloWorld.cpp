


/* C++ comes with libraries that provide us with many ways for 
performing input and output. 
In C++ input and output are performed in the form 
of a sequence of bytes or more commonly known as streams. */
#include <iostream>
/*
Because C++ is largely a superset of C,
it includes the C stanard library,
 so stdio based code works. So <stdio.h> same staff like 
 <iostream> for c++.
*/
#include <stdio.h> 
#include <string.h>
using namespace std;

int main(void) {

    string salute = "Hello World! With C++";
    printf("%s", salute);
    return 0;

}