//3. Write a C++ program to create a class called Car that has private
//member variables for company, model, and year. Implement member
//functions to get and set these variables

#include <iostream>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    void setCompany(string a) {
        company = a;
    }

    string getCompany() {
        return company;
    }

    void setModel(string b) {
        model = b;
    }

    string getModel() {
        return model;
    }

    void setYear(int c) {
        year = c;
    }

    int getYear() {
        return year;
    }

    void display() {
        cout << "Company name is: " << company << endl;
        cout << "Company model is: " << model << endl;
        cout << "Year is: " << year << endl;
    }
};

int main() {
    Car obj;
    obj.setCompany("BMW");
    obj.setModel("X5");
    obj.setYear(2003);
    obj.display();
   
}

