//7. Write a C++ program to implement a class called Date that has private
//member variables for day, month, and year. Include member functions to
//set and get these variables, as well as to validate if the date is valid.
#include <iostream>
using namespace std;

class date {
private:
     int day;
     string month;
    int year;
     

public:
  setday(int a){
  	day=a;
  	if(a>0 && a<31){
  		cout<<"valid input date"<<endl;
	  }
	  else{
	  		cout<<"enter the date beetwen 1 to 31"<<endl;
	  }
  	
  }
  
   int getDay() {
        return day;
    }
    
   setmonth(string b){
  	month=b;
  	
  }
  
 string getmonth(){
  	return month;
  }
   setyear(int c){
  	year=c;
  	
  	
  }
  
  int getyear(){
  	return year;
  }
  
  display(){
  	cout<<"the day is:"<<day<<endl;
  		cout<<"the month is:"<<month<<endl;
  			cout<<"the year is:"<<year<<endl;
  }
};

 main() {
   date obj;
    obj.setday(04);
    obj.setmonth("may");
    obj.setyear(2004);
    obj.display();
}

