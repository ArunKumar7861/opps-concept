//2. Write a program of Addition, Subtraction, Division, Multiplication using
//constructor
#include<iostream>
using namespace std;
//addition
class addition{
	public:
	
	addition(){	
	cout<<"addition"<<endl;
		int a,b;
		cout<<"enter the number 1:"<<endl;
		cin>>a;
			cout<<"enter the number 2:"<<endl;
		cin>>b;
			cout<<"the sum is"<<a+b<<endl;
	
	}
};
//Subtraction

class Subtraction{
	public:
	Subtraction(){
			cout<<"Subtraction"<<endl;
		int a,b;
		cout<<"enter the number 1:"<<endl;
		cin>>a;
			cout<<"enter the number 2:"<<endl;
		cin>>b;
			cout<<"the Subtraction is"<<a-b<<endl;
	
	}
};
//Multiplication
class Multiplication{
	public:
	Multiplication(){
			cout<<"Multiplication"<<endl;
		int a,b;
		cout<<"enter the number 1:"<<endl;
		cin>>a;
			cout<<"enter the number 2:"<<endl;
		cin>>b;
			cout<<"the Multiplication is"<<a*b<<endl;
	
	}
};
//Division
class Division{
	public:
	Division(){
		cout<<"Division"<<endl;
		int a,b;
		cout<<"enter the number 1:"<<endl;
		cin>>a;
			cout<<"enter the number 2:"<<endl;
		cin>>b;
			cout<<"Division is"<<(float)a/b<<endl;
	
	}
};



main (){
addition obj1;
Subtraction obj2;
Multiplication obj3;
Division obj4;
}
