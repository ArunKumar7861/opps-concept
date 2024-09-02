//2. Define a class to represent a bank account. Include the following members:
//3. Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account
//Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance


#include <iostream>
using namespace std;

class bankaccount{
	private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;
    public:
       assignvalues(string name, int accNumber, string accType, double initialBalance) {
         depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

       deposited(double amount) {
        if(amount>0){
         balance += amount;
            cout << "Amount deposited successfully. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
		
    }

   withdraw(double amount) {
   	if(amount > 0 && amount <= balance){
   		balance=balance-amount;
   		cout << "Amount withdrawn successfully. New balance: " << balance << endl;
	   }
        else{
        	            cout << "Insufficient balance or invalid amount." << endl;
		}
    }
    display(){
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    bankaccount account;
    
  
    account.assignvalues("Arun", 123456, "Savings", 1000.0);

   
    account.display();

    
    account.deposited(500.0);

    account.withdraw(200.0);

    
    account.display();
}

