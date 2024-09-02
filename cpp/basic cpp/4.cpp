//4. Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.

#include <iostream>
using namespace std;

class circlearea{
	private:
		
   int reduce;
    double area;
    const double pi = 3.14159;
    
    public:
    	
       area(int r ) {
         reduce=r;
         area = pi*reduce*reduce;
           cout << "area of circle " << area << endl;
         
    }

      
};

int main() {
   circlearea obj;
   obj.area(10);
    
}

