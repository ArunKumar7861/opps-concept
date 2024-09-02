//1. WAP to create simple calculator using class
#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    // Function to set values
    void setValues(double a, double b) {
        num1 = a;
        num2 = b;
    }

    // Function to add two numbers
    double add() {
        return num1 + num2;
    }

    // Function to subtract two numbers
    double subtract() {
        return num1 - num2;
    }

    // Function to multiply two numbers
    double multiply() {
        return num1 * num2;
    }

    // Function to divide two numbers
    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    // Set the values in the calculator object
    calc.setValues(num1, num2);

    switch (op) {
        case '+':
            cout << "Result: " << calc.add() << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract() << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply() << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide() << endl;
            break;
        default:
            cout << "Error: Invalid operator" << endl;
            break;
    }

   
}

