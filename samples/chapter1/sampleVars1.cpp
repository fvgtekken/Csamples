#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

void chapotaYaqnue(int k);
void chapotaYaqnue2(string k);

/*C/C++ supports one other type of constant: the string. A string is a set of characters
enclosed in double quotes. For example, "this is a test" is a string. You have seen examples
of strings in some of the printf( ) statements in the sample programs. Although C
allows you to define string constants, it does not formally have a string data type.
(C++ does define a string class, however.)
You must not confuse strings with characters. Asingle character constant is enclosed
in single quotes, as in 'a'. However, "a" is a string containing only one letter.*/

int main(void)
{
    string str1 = "Federico";
    string str2;

    str2 = str1;

    int x;
    int h;
    x = 10;
    h = x;

    chapotaYaqnue2(str2);

    cout << "Esto es una copia de str1:" << str2 << "\n";
    cout << "El nombre es:" << str1 << "\n";
    cout << "The Value of 'h' is:"
         << h << "\n";

    chapotaYaqnue(h);
    return 0;
}

void chapotaYaqnue(int k)
{

    printf("%d", k);
}

void chapotaYaqnue2(string k)
{
    printf("%S", "Esto es una llamada a chapotaYanque2", k);
}