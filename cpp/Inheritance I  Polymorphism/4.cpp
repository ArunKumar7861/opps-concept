//4. Write a C++ Program display Student Mark sheet using Multiple inheritance
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollno;
    string name;

public:
    void input1() {
        cout << "Enter the name: ";
        cin >> name;

        cout << "Enter the roll number: ";
        cin >> rollno;
    }
};

class Marks : public Student {
public:
    int marks1;
    int marks2;
    int marks3;

    void input2() {
        cout << "Enter the marks for subject 1: ";
        cin >> marks1;
        cout << "Enter the marks for subject 2: ";
        cin >> marks2;
        cout << "Enter the marks for subject 3: ";
        cin >> marks3;
    }
};

class Marksheet : public Marks {
public:
    void display() {
        double avg = (marks1 + marks2 + marks3) / 3.0; 
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
        cout << "Marks in Subject 3: " << marks3 << endl;
        cout << "Average Marks: " << avg << endl;
    }
};

 main() {
    Marksheet obj1;
    obj1.input1();
    obj1.input2();
    obj1.display();

    
}


