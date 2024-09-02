//9. Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;
class matrix{
	public:
		int a[3];
	
	public:
		input(){
			for(int i=0;i<3;i++){
				cout<<"enter the value:a[" << i << "]: "<<endl;
				     
			cin>>a[i];	
			}
		
		}
	
};
class add:public matrix{
	public:
		int b[3];
	public:
		input(){
			matrix::input();
			for(int i=0;i<3;i++){
				cout<<"enter the value b[" << i << "]:"<<endl;
			cin>>b[i];
			}
			
		}
		addition(){
			
				for(int i=0;i<3;i++){
					cout<<"the addition is"<<a[i]+b[i]<<endl;
				}
			
		}
};
main(){
	 add obj;
	obj.input();
	obj.addition();
	
}
