#include <iostream>
#include <stdlib.h>
using namespace std;

void syntax_error(int num);

int main (void) {
    
    
    int arrSize, i;
    syntax_error(1);
    return 0;
}

void syntax_error(int num) {
    
    static char *err[] = {
        "Cannot Open File\n",
        "Read Error\n",
        "Write Error\n",
        "Media Failure\n"
    };

    printf("%s", err[num]);
}