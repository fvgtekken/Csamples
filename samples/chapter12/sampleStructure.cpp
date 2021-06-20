// Using a structure to define a class.
#include <iostream>
#include <cstring>

using namespace std;
struct mystr {
    void buildstr(char s[]); // public
    void showstr();
    private: // now go private
    char str[255];
} ;

void mystr::buildstr(char s[]) {
    
    if(!s) {
        *str = '\0'; // initialize string 
    } else  {
        strcat(str, s);
    }
}

void mystr::showstr(){
    cout << str << "\n";
}


int main() {
     mystr s;
   
    char str[80];
    strcpy(str, "");
    s.buildstr(str); // init
    strcpy(str, "Hello");
    s.buildstr(str);
     strcpy(str, "There!");
    s.buildstr(str);
    s.showstr();
    return 0;
}