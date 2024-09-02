//6. Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Function to set the name
    void setName(string n) {
        name = n;
    }

    // Function to get the name
    string getName() {
        return name;
    }

    // Function to set the age
    void setAge(int a) {
        if (a > 0) {
            age = a;
        } else {
            cout << "Please enter a valid age." << endl;
        }
    }

    // Function to get the age
    int getAge() {
        return age;
    }

    // Function to set the country
    void setCountry(string c) {
        country = c;
    }

    // Function to get the country
    string getCountry() {
        return country;
    }

    // Function to display person details
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};

int main() {
    // Create an object of Person
    Person p;

    // Set values
    p.setName("John Doe");
    p.setAge(30);
    p.setCountry("USA");

    // Display values
    p.display();

    // Get values individually
    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;
    cout << "Country: " << p.getCountry() << endl;

    return 0;
}

