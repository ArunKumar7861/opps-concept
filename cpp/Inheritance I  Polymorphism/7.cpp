//7. Write a C++ Program to illustrates the use of Constructors in multilevel
//inheritance
#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "This is the base class constructor" << endl;
    }
};

class Derived1 : public Base {
public:
    Derived1() {
        cout << "This is the derived1 class constructor" << endl;
    }
};

class Derived2 : public Derived1 {
public:
    Derived2() {
        cout << "This is the derived2 class constructor" << endl;
    }
};

int main() {
    Derived2 obj;
    
}

