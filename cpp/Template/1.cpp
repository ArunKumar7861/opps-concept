//1.Write a program of to swap the two values using template
// function templates 
#include <iostream> 
using namespace std; 

// Function template to swap 
// two numbers 
template <class T> 
int swap_numbers(T& x, T& y) 
{ 
	T t; 
	t = x; 
	x = y; 
	y = t; 

} 

// Driver code 
int main() 
{ 
	int a, b; 
	a = 10, b = 20; 

	// Invoking the swap() 
	swap_numbers(a, b); 
	cout << a << " " << b << endl; 
 
}

