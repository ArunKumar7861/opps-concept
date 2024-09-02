//13.Write a program to find the max number from given two numbers
//using friend function
#include <iostream>
using namespace std;
class Base{
	private:
		int a,b;
		
		friend class Drive;
};
class Drive{
	public:
	swap(Base & t){
			cout<<"Enter the number 1: "<<endl;
	    cin>>t.a;
	cout<<"Enter the number 2: "<<endl;
	cin>>t.b;
    if(t.a>t.b){
    	cout<<" Number 1 is greater then Number 2:"<<t.a<<endl;
	}
	else{
	cout<<" Number 2 is greater then Number 1:"<<t.b<<endl;	
	}
	}
};
main(){
	Base obj2;
	Drive obj;
	obj.swap(obj2);
}

