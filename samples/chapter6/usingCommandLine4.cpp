#include <stdio.h>
int main(int argc, char *argv[]) {
int t, i;

/*
For example, the next program displays all of the arguments
with which it was called, one character at a time:
*/

/*La función putchar se puede utilizar para visualizar 
una cadena de caracteres (almacenándola en un array), 
y escribir en un bucle los caracteres uno a uno*/

for(t=0; t<argc; ++t) {

    i = 0;
    while(argv[t][i]) {
        putchar(argv[t][i]); 
        ++i;
    }
  
}
printf("\n");
printf("%c thir character \n",argv[3][2]);
return 0;

}