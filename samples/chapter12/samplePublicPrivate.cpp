#include <iostream>
#include <cstring>
using namespace std;



class employee {
    char name[80]; // private by default
    public:
        void putname(char n[]); // these are public
        void getname(char n[]);
    private:
        double wage; // now, private again
       
    public:
        void putwage(double w); // back to public
    double getwage();
};

void employee::putname(char n[]){
    strcpy(name, n);
}

void employee::getname(char n[]) {
    strcpy(n, name);
}

void employee::putwage(double w){
    wage = w;
}

double employee::getwage() {
    return wage;
}

int main() {
    
    employee ted;
    char name[80];
    char str[80];
    strcpy(str, "Ted Jones");

    ted.putname(str);
    ted.putwage(75000);

    ted.getname(name);
    cout << name << " makes $";
    cout << ted.getwage() << " per year.";
    return 0;
}