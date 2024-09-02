//1 Write a program to find the cubic values using inline function.

#include<iostream>
using namespace std;

class CubeCalculator{
	public:
		inline cube(int number)
		{
			return number*number*number;
		}
};
main()
{
	CubeCalculator calculator;
	 int number;
	
	cout<<"Enter a number to find cube : ";
	cin>>number;
	
	int result = calculator.cube(number);
	cout<<"The cube of "<<number<<"is :"<<result<<endl;
}
