/* A simple dictionary. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/* list of words and meanings */
char const *dic[][40] = {
"atlas", "A volume of maps.",
"car", "A motorized vehicle.",
"telephone", "A communication device.",
"airplane", "A flying machine.",
"", "" /* null terminate the list */
};

int main(void) {

char word[80], ch, helpStr;
char **p;

printf("chipote dic %c ", *dic[0][2]);


do {

puts("\nEnter word: ");
scanf("%s", word);


p = (char **)dic;

    /* find matching word and print its meaning */
    do {
        if(!strcmp(*p, word)) {
            puts("Meaning:");
            puts(*(p+1));
            break;
        }

        
        /* advance through the list */
        printf("%c", *p); 
        p = p + 2;
       
        

    } while(*p);

if(!*p) puts("Word not in dictionary.");

printf("Another? (y/n): ");
scanf(" %c%*c", &ch);

} while(toupper(ch) != 'N');

return 0;
}


/* prinf api
%c Character
%d Signed decimal integers
%i Signed decimal integers
%e Scientific notation (lowercase e)
%E Scientific notation (uppercase E)
%f Decimal floating point
%g Uses %e or %f, whichever is shorter
%G Uses %E or %F, whichever is shorter
%o Unsigned octal
%s String of characters
%u Unsigned decimal integers
%x Unsigned hexadecimal (lowercase letters)
%X Unsigned hexadecimal (uppercase letters)
%p Displays a pointer
%n The associated argument must be a pointer to
an integer. This specifier causes the number of
characters written so far to be put into that integer.
%% Prints a % sign
*/