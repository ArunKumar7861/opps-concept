//5. Write a C++ program to create a class called Triangle that has private
//member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;

class triangle{
	
	private:
		
	double a,b,c;
	
		public:
	

	check(){
		
		cout<<"enter the first side 1:"<<endl;
	cin>>a;
	
	cout<<"enter the first side 2:"<<endl;
	cin>>b;
	
	cout<<"enter the first side 3:"<<endl;
	cin>>c;
	
		if(a==b && b==c){
			cout<<"the triangle is equilateral"<<endl;
		}
	   else if(a == b || b == c || a == c) {
            cout << "The triangle is isosceles" << endl;
        } else {
            cout << "The triangle is scalene" << endl;
        }
	}
};

main(){
	triangle obj;
	obj.check();
}
