//6. Write a C++ program to implement a class called Employee that has
//private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee
//performance. Using of constructor
#include<iostream>
using namespace std;

class Employee {
    private:
        string name;
        double id;
        int salary;
        char a;

    public:
        
       Employee() {
       	
       	 cout << "Enter the name of the employee: " << endl;
            cin >> name;
            cout << "Enter the ID of the employee: " << endl;
            cin >> id;
            cout << "Enter the salary of the employee: " << endl;
            cin >> salary;
            cout << "Enter the grade of the employee: " << endl;
            cin >> a;
       	
       	
            if (a == 'a') {
                salary = salary * 1.5;
                cout << "New salary is " << salary << endl;
            }
            
        else if (a == 'b') {
                salary = salary * 1.2;
                cout << "New salary is " << salary << endl;
            }
          else if (a == 'c') {
                salary = salary * 1;
                cout << "New salary is " << salary << endl;
            }   
          
        }
};

int main() {
    Employee obj;
  
    
    
}

