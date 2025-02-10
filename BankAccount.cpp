//Write a C++ program to implement a class called BankAccount that has private member variables
//for account number and balance.Include member functions to deposit and withdraw money from the account.
#include <iostream>
#include "bank_account_class.h"
using namespace std;

int main()
{

	
bank_account_class customer_1;

	cout << "ID: ";
		int num; 
	cin >> num;
		float BALANCE_1 = 25000;
customer_1.account_details(num, BALANCE_1);

	
	cout << "1.Info\n2.Despoit\n3.Withdraw\n";
		int choice;
	cin  >> choice;
	
		if (choice == 1)
		{
		 customer_1.get_info();
		 return 0;
		}

		else if (choice == 2)
		{
			cout << "How much will you despoit?\n";
				float put;
			cin >> put;
			customer_1.despoit(put);
		}

		else if (choice == 3)
		{
			cout << "How much you want?\n";
				float take;
			cin >> take;
			customer_1.withdraw(take);
		}

		else
		{
			cout << "Wrong choice\n";
			return 0;
		}

		customer_1.get_info();

	return 0;
}