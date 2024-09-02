//11.Write a program to calculate the area of circle, rectangle and triangle
//using Function Overloading
//Rectangle: hight * breadth
//Triangle: ½ *hight* breadth
//Circle: Pi * reduce *reduce
#include <iostream>
using namespace std;
class circle{
	public :
		int r;
		public:
			
			area(){
			cout<<"Enter the reduce"<<endl;
	             cin>>r;
				cout<<"the area of circule is"<<3.14*r*r<<endl;	
	             
			}	
};
class triangle:public circle{
	public:
	int h;
	int w;
	public:
		area(){
			cout<<"Enter the hight"<<endl;
	             cin>>h;
	             cout<<"Enter the width"<<endl;
	             cin>>w;
	             cout<<"the area of circule is"<<0.5*h*w<<endl;
		}
	
};
class rectangle:public triangle{
	public:
		int l;
		int a;
		
		area(){
			   circle::area();
			   triangle::area();
			cout<<"Enter the length"<<endl;
	             cin>>l;
	             cout<<"Enter the width"<<endl;
	             cin>>a;
	             cout<<"the area of  is rectangle"<<l*a<<endl;
		}
};
main(){
	rectangle obj;
	obj.area();
}

