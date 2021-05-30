#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
#include<string.h>
/*There are two special built-in arguments, 
argv and argc, that are used to receive
command line arguments. The argc parameter 
holds the number of arguments on
the command line and is an integer. 
It is always at least 1 because the name of the
program qualifies as the first argument*/

/* The argv parameter is a pointer to an array
of character pointers. Each element in this array points to a command line argument.
All command line arguments are strings—any numbers will have to be converted by
the program into the proper internal format. 
For example, this simple program prints
Hello and your name on the screen if you type it directly after the program name.
*/

int main(int argc, char *argv[]) {

    if(argc!=2) {
        printf("Enter your password please, to run the super dooper program.\n");
        exit(1);
    }



    if(!strcmp(argv[1], "Yanque Peronista!")) {
        printf("Hello con este codigo (123),  poder ganas un 1 millon de australes!");
      
    }

    return 0;

}