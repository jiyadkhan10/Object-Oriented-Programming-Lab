#include<iostream>
using namespace std;

class Account
{
   private:
   	
       double balance; 
       double interestRate; 
       double interest; 
       int transactions; 
       
    public:
		   
        Account(double iRate = 0.0045, double bal = 0)
        {
            interestRate = iRate;
            balance = bal;
            transactions = 0;
        }
           
        void setInterestRate(double iRate)
        {
            interestRate = iRate;
        }
           
        void makeDeposit(double amount)
        {
              
            transactions++;
            balance += amount;
        }
        
        void withdraw(double amount);

        void calcInterest()
        {
            interest = (interestRate*balance);
            balance += interest;      
        }
          
        double getInterestRate() 
        {
            return interestRate;
        }
          
        double getBalance()
        {
            return balance;
        }
           
        double getInterest()
        {
            return interest;
        }
           
        int getTransactions() 
        {
            return transactions;
        }
};



void Account :: withdraw(double amount)
           {
               if(amount > balance)
               {
                   cout << "Error withdrawal amount is greater than balance: \n";
                   return;
               }
               else
               { 
                   transactions++;
                   balance -= amount;
               }
           }
int main()
{
   Account A;
   int option;

   while(option != 5)
   {
       cout << "MENU\n";
       cout << "1-CHECK BALANCE" << endl;
       cout << "2-MAKE DEPOSIT" << endl;
       cout << "3-MAKE WITHDRAWAL" << endl;
       cout << "4-ACCOUNT STATEMENT" << endl;
       cout << "5-EXIT" << endl;
       cout << "ENTER YOUR CHOICE: ";
       cin >> option;
       
       switch(option)
       {
           case 1:
               {
                   cout << "YOUR CURRENT BALANCE IS : " << A.getBalance() << endl;
               }
               
               break;
               
           case 2:
               {
                   double amount;
                   cout << "ENTER THE AMOUNT FOR DEPOSIT: ";
                   cin >> amount;
                   A.makeDeposit(amount);
                   cout << "DEPOSIT MADE INTO YOUR ACCOUNT" << endl;
                   cout << "YOUR CURRENT BALANCE IS: " << A.getBalance() << endl;
                  
               }
               
               break;
               
           case 3:
               {
                   double amount;
                   cout << "ENTER THE AMOUNT FOR WITHDRAWAL: ";
                   cin >> amount;
                   
                   A.withdraw(amount);
                   
                   cout << "YOUR CURRENT BALANCE IS: " << A.getBalance() << endl;
                  
               }
               
               break;
               
           case 4:
           {
               cout << "ACCOUNT STATEMENET" << endl;
               cout << "BALANCE: " << A.getBalance() << endl;
               cout << "NUMBER OF TRANSACTIONS: " << A.getTransactions() << endl;
               cout << "INTEREST RATE: " << A.getInterestRate() << endl;
               
               A.calcInterest();
               
               cout << "INTEREST EARNED: " << A.getInterest() << endl;
           }
           
           break;
           
       }
   }
   return 0;
}
