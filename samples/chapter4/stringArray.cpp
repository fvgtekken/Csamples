/* A very simple text editor. */
#include <stdio.h>
#define MAX 100
#define LEN 80
char text[MAX][LEN];
int main(void)
{

    // https://www.geeksforgeeks.org/understanding-register-keyword/
     /*Registers are faster than memory to access, so the variables which are most frequently 
      used in a C program can be put in registers using register keyword.
      The keyword register hints to compiler that a given variable can be put in a register.
      It’s compiler’s choice to put it in a register or not. 
      Generally, compilers themselves do optimizations and put the variables in register.*/

    /* 1) If you use & operator with a register variable then 
     compiler may give an error or warning (depending upon the compiler you are using),
     because when we say a variable is a register, it may be stored in a register 
     instead of memory and accessing address of a register is invalid.

      int main() {
        Error becouse registrer is using an operator 
        register int i = 10;
        int* a = &i;
        printf("%d", *a);
        getchar();
        return 0;
    }
*/

    register int t, i, j;
    printf("Enter an empty line to quit.\n");
    for (t = 0; t < MAX; t++)
    {
        printf("%d: ", t);
        gets(text[t]);
        if (!*text[t])
            break; /* quit on blank line */
    }

    for (i = 0; i < t; i++)
    {
        for (j = 0; text[i][j]; j++)
            putchar(text[i][j]);
        putchar('\n');
    }

    return 0;
}