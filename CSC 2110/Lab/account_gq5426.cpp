/******************************************************************************

Create a file account.cpp containing a Bank Account Class.
Your class should contain:
- public fields for the customer’s name and a balance,
- one or more constructors,
- methods to access the name and balance (these methods don’t modify the data),
- and methods to deposit and withdraw an amount (these methods modifies the data).
Write a main function that creates two of these objects: Account1 & Account2 and then:
- Assigns the name and balance for both Account1 & Account2 objects
- prints the original balance for both accounts with the customer’s name
- deposits some amount in Account1 and prints the final balance with the customer’s name
- withdraws some amount from Account2 and prints the final balance with the customer’s
name

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    public:
        string customerName;
        double customerBalance;
        
        BankAccount(string inputName, double inputBalance){
            customerName = inputName;
            customerBalance = inputBalance;
            cout << endl <<"Account created: Name: " << customerName << ", Balance: " << customerBalance;
        }
        
        string name(){
            return customerName;
        }
        
        double balance(){
            return customerBalance;
        }
        
        void deposit(double depositAmount){
            customerBalance += depositAmount;
            cout << endl <<"Deposit Made: Account Name: " << customerName << ", New Balance: " << customerBalance;
        }
        
        void withdraw(double withdrawAmount){
            customerBalance -= withdrawAmount;
            cout << endl <<"Withdraw Made: Account Name: " << customerName << ", New Balance: " << customerBalance;
        }
        
};

int main()
{
    BankAccount Account1( "One", 1000), Account2("Two", 2000);
    Account1.deposit(100);
    Account2.withdraw(200);
    
    return 0;
}