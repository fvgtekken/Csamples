#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
/*
The correct understanding and use of pointers is critical to successful C/C++
programming. There are three reasons for this: First, pointers provide the means
by which functions can modify their calling arguments. Second, pointers support
dynamic allocation. Third, pointers can improve the efficiency of certain routines. Also,
as you will see in Part Two, pointers take on additional roles in C++.
Pointers are one of the strongest but also one of the most dangerous features in
C/C++. For example, uninitialized pointers (or pointers containing invalid values)
can cause your system to crash. Perhaps worse, it is easy to use pointers incorrectly,
causing bugs that are very difficult to find.
Because of both their importance and their potential for abuse, this chapter examines
the subject of pointers in detail.

A pointer is a variable that holds a memory address. This address is the location of
another object (typically another variable) in memory. For example, if one variable
contains the address of another variable, the first variable is said to point to the second.
Figure 5-1 illustrates this situation.
*/


int main(void) {

    int target, source;
    int *m;
    
    source = 10;
    /*
    &, a unary operator that returns 
    the memory address of its operand.
    Places into m the memory address of the variable count.
    */
    m = &source;
    
    /*
    The second pointer operator is *, which is the complement of &. 
    The * is a unary operator that returns the value of the variable located 
    at the address that follows it. For example, if m contains the memory address 
    of the variable source,
    
    */

    target = *m;
    
    printf("%d", target);
    return 0;

}