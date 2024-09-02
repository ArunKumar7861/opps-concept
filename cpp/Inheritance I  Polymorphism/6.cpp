//6. Write a C++ Program to show access to Private Public and Protected using
//Inheritance
#include <iostream>
#include <string>
using namespace std;

class Base {
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;

    void input() {
        cout << "Enter the protectedVar: ";
        cin >> protectedVar;

        cout << "Enter the publicVar: ";
        cin >> publicVar;
    }

    void setPrivateVar(int value) {
        privateVar = value;
    }

    int getPrivateVar() {
        return privateVar;
    }
};

class Derived : public Base {
public:
    void display() {
        // Accessing privateVar through a public function of the base class
        cout << "privateVar: " << getPrivateVar() << endl;
        // Accessing protectedVar and publicVar directly
        cout << "protectedVar: " << protectedVar << endl;
        cout << "publicVar: " << publicVar << endl;
    }
};

int main() {
    Derived obj;
    obj.input();
    obj.setPrivateVar(300);
    obj.display();

  
}

