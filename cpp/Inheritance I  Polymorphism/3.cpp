//2. Write a C++ Program to find Area of Rectangle using inheritance
#include <iostream>
using namespace std;

class Rectangle {
protected:  
    int l;
    int w;

public:
    void inputdata() {  
        cout << "Enter the length of the rectangle: ";
        cin >> l;
        cout << "Enter the width of the rectangle: ";
        cin >> w;
    }
};

class RectangleArea : public Rectangle {
public:
    void area() { 
        cout << "The area is " << l * w << endl;
    }
};

int main() {  
    RectangleArea obj;  
    obj.inputdata();  
    obj.area();        

}


