#include <iostream>
#include "bank_account_class.h"
using namespace std;

void bank_account_class::account_details(const int& id, float money)
{
	account_number = id;
	balance = money;
}
float bank_account_class::despoit(float put)
{
	return (balance+=put);
}
float bank_account_class::withdraw(float take)
{
	return (balance-=take);
}
void bank_account_class::get_info()
{
	cout << "Account id: " << account_number << endl;
	cout << "Balance: " << balance << endl;
}