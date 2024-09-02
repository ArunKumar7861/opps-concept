//8. Write a program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading
#include <iostream>
using namespace std;

class Calculator {
public:
    // Addition
    int operate(int a, int b) {
        return a + b;
    }

    // Subtraction
    int operate(int a, int b, char op) {
        if (op == '-') {
            return a - b;
        }
        
    }

    // Multiplication
    double operate(double a, double b) {
        return a * b;
    }

    // Division
    double operate(double a, double b, char op) {
        if (op == '/') {
            if (b != 0) {
                return a / b;
            } else {
                cout << "Error: Division by zero" << endl;
               
            }
        }
   
    }
};

int main() {
    Calculator calc;

    cout << "Addition of 10 and 20 = " << calc.operate(10, 20) << endl;
    cout << "Subtraction of 40 and 50 = " << calc.operate(40, 50, '-') << endl;
    cout << "Multiplication of 40.6 and 50.8 = " << calc.operate(40.6, 50.8) << endl;
    cout << "Division of 60.8 by 60.8 = " << calc.operate(60.8, 60.8, '/') << endl;

    
}

