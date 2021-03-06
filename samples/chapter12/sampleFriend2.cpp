#include <iostream>
using namespace std;
const int IDLE = 0;
const int INUSE = 1;
/*
Notice that this program uses a forward declaration (also called a forward reference)
for the class C2. This is necessary because the declaration of idle( ) inside C1 refers
to C2 before it is declared. To create a forward declaration to a class, simply use the
form shown in this program.*/
class C2; // forward declaration

class C1 {
    int status; // IDLE if off, INUSE if on screen
    // ...
    public:
    void set_status(int state);
    friend int idle(C1 a, C2 b);
};

class C2 {
    int status; // IDLE if off, INUSE if on screen
    // ...
    public:
    void set_status(int state);
    friend int idle(C1 a, C2 b);
};


void C1::set_status(int state){
    status = state;
}

void C2::set_status(int state) {
    status = state;
}

int idle(C1 a, C2 b) {
    if(a.status || b.status) return 0;
    else return 1;
}

int main() {
    C1 x;
    C2 y;
    x.set_status(IDLE);
    y.set_status(IDLE);
    if(idle(x, y)) cout << "Screen can be used.\n";
    else cout << "In use.\n";
    x.set_status(INUSE);
    if(idle(x, y)) cout << "Screen can be used.\n";
    else cout << "In use.\n";
    return 0;
}