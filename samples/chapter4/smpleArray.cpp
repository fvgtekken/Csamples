/*strcpy(s1, s2) Copies s2 into s1.
strcat(s1, s2) Concatenates s2 onto the end of s1.
strlen(s1) Returns the length of s1.
strcmp(s1, s2) Returns 0 if s1 and s2 are the same; less than 0 if s1<s2;
greater than 0 if s1>s2.
strchr(s1, ch) Returns a pointer to the first occurrence of ch in s1.
strstr(s1, s2) Returns a pointer to the first occurrence of s2 in s1.*/

// C++ code to demonstrate the working of
// copy() and swap()
#include <iostream>
#include <string> // for string class
using namespace std;
int main()
{
    string *str23;

    // Initializing 1st string
    string str1 = "geeksforgeeks is for geeks";

    // Declaring 2nd string
    string str2 = "geeksforgeeks rocks";

  
    // Declaring character array
    char ch[80];

    // using copy() to copy elements into char array
    // copies "geeksforgeeks"
    str1.copy(ch, 13, 0);

    // Diplaying char array
    cout << "The new copied character array is : ";
    cout << ch << endl
         << endl;

    // Displaying strings before swapping
    cout << "The 1st string before swapping is : ";
    cout << str1 << endl;
    cout << "The 2nd string before swapping is : ";
    cout << str2 << endl;

    // using swap() to swap string content
    str1.swap(str2);

    // Displaying strings after swapping
    cout << "The 1st string after swapping is : ";
    cout << str1 << endl;
    cout << "The 2nd string after swapping is : ";
    cout << str2 << endl;

    return 0;
}
