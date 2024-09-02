//12.Write a programto swap the two numbers using friend function
//without using third variable
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
        t.a = t.a + t.b;
        t.b = t.a - t.b;
        t.a =t.a - t.b;

	cout<<"the swap up number is"<<t.a<<endl;
	cout<<"the swap up number is"<<t.b<<endl;
	}

	
	
};
main(){
	Base obj2;
	Drive obj;
	obj.swap(obj2);
}
