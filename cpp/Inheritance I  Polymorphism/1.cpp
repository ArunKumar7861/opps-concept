//1. Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display
//data. (Single Inheritance)
#include <iostream>
using namespace std;
class cricketer{
	private:
    string name;
    int age;
    
   public:
    
   inputData() {
        cout << "Enter Cricketer's Name: ";
        cin >> name;
        cout << "Enter Cricketer's Age: ";
        cin >> age;
    }
    
	
};
class batsman: public cricketer {
	public:
		    
	int totalRuns;
    int numberOfInnings;
    int bestPerformance;
    double averageRuns;
    
        inputBatsmanData() {
     
      cout << "Enter Total Runs: ";
      cin >> totalRuns;
       cout << "Enter Number of Innings: ";
      cin >> numberOfInnings;
      cout << "Enter Best Performance: ";
        cin >> bestPerformance;
       
    }
     calculateAverageRuns() {
        if (numberOfInnings != 0) {
            averageRuns = static_cast<double>(totalRuns) / numberOfInnings;
        } else {
            averageRuns = 0.0;
        }
        
        cout << "Total Runs: " << totalRuns << endl;
       cout << "Number of Innings: " << numberOfInnings << endl;
        cout << "Best Performance: " << bestPerformance << endl;
      cout << "Average Runs: " << averageRuns << endl; 
        
    }
       
	
	
};
main(){
	cricketer obj;
	obj.inputData();
	batsman obj2;
	obj2.inputBatsmanData();
	obj2.calculateAverageRuns();
	
	
	
}
