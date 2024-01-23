// Displaying and updating Account balances.
#include <iostream>
#include "Account.h"

using namespace std;

int main() 
{
   Account account1{"Jane Green", 50};
   Account account2{"John Blue", -7}; 

   // display initial balance of each object
   cout << "account1: " << account1.getName() << " balance is $"
      << account1.getBalance(); 
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance(); 

   cout << "\n\nEnter deposit amount for account1: "; // prompt
   int depositAmount;
   cin >> depositAmount; // obtain user input
   cout << "adding " << depositAmount << " to account1 balance";
   account1.deposit(depositAmount); // add to account1's balance

   // display balances
   cout << "\n\naccount1: " << account1.getName() << " balance is $"
      << account1.getBalance(); 
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance(); 

   cout << "\n\nEnter deposit amount for account2: "; // prompt
   cin >> depositAmount; // obtain user input
   cout << "adding " << depositAmount << " to account2 balance";
   account2.deposit(depositAmount); // add to account2 balance

   cout << "\n\nEnter withdraw amount for account1: "; // prompt
   int withdrawAmount;
   cin >> withdrawAmount; // obtain user input
   cout << "withdrawing " << depositAmount << " to account1 balance\n";
   account1.withdraw(withdrawAmount); // add to account1's balance

   cout << "\n\nEnter withdraw amount for account2: "; // prompt
   cin >> withdrawAmount; // obtain user input
   cout << "withdrawing " << depositAmount << " to account2 balance\n";
   account2.withdraw(withdrawAmount); // add to account1's balance

   // display balances
   cout << "\n\naccount1: " << account1.getName() << " balance is $"
      << account1.getBalance(); 
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance() << endl; 
} 