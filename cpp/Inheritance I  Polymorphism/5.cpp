//5. Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)
#include<iostream>
#include<string>
using namespace std;
class Students{
      protected:
      	int rollno;
      	string name;
      	public:
    input(){
    	cout<<"enter the number:";
    	cin>>name;
    		cout<<"enter the rollno:"<<endl;
    	cin>>rollno;
    	
	}
};
class test{
	protected:
	int subject1;
	int subject2;
	
	public:
		subject(){
				cout<<"enter the subject1 number:";
    	cin>>subject1;
    	cout<<"enter the subject2 number:";
    	cin>>subject2;
		}
};
class result :public Students,public test{
	protected:
	int averge;

	public:
	display(){
			cout<<"enter the name is:"<<name<<endl;
				cout<<"enter the average is:"<<(subject1+subject2)/2<<endl;
			
			
	}
};
main(){
	result obj;
	obj.input();
   obj.subject();
	obj.display();

}
