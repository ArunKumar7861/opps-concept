//5. Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter

#include<iostream>
using namespace std;

class Rectangle{
	private:
	int l;
	int w;
	
	public:
		area(){
				cout<<"Enter the length:"<<endl;
	             cin>>l;
		cout<<"Enter the width:"<<endl;
	          cin>>w;
		cout<<"area of rectange is :"<<l*w<<endl;
		}
perimeter(){
	cout<<"area of  is perimeter:"<<2*(l+w);
}

		
};
main(){
	Rectangle obj;
	obj.area();
	obj.perimeter();
}
