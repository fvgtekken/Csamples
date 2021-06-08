#include <stdio.h>


void syntaxError(int num);
int main(void) {
    syntaxError(1);
    syntaxError(-1);
     syntaxError(-2);

    return 0;
}


void syntaxError(int num) {

    int i;

    const static char *err[] = {
        "Cannot Open File\n",
        "Read Error\n",
        "Write Error\n",
        "Media Failure\n"
    };

    if(num == -1) {
        for(i = 0; i <= 3; i++){
            printf("%s", err[i]);
        }
    } else {
            printf("%s", err[num]);
    }

    if(num == -2) {
          for(i = 0; i <= 3; i++){
            printf("%c",*err[i]);
        }
    }
    
}