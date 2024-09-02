#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

     initializePerson(string n, int a) {
        name = n;
        age = a;
    }

     readPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

     displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    float percentage;

     initializeStudent(string n, int a, float p) {
        initializePerson(n, a);
        percentage = p;
    }

     readStudent() {
        readPerson();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    displayStudent() {
        displayPerson();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher {
public:
    int salary;

     initializeTeacher(int s) {
        salary = s;
    }

     readTeacher() {
        cout << "Enter salary: ";
        cin >> salary;
    }

     displayTeacher() {
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Student studentObj;
    Teacher teacherObj;

    studentObj.readStudent();
    teacherObj.readTeacher();

    cout << "\nStudent Information:" << endl;
    studentObj.displayStudent();

    cout << "\nTeacher Information:" << endl;
    teacherObj.displayTeacher();

}

