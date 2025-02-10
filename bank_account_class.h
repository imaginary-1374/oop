#pragma once
using namespace std;
class bank_account_class
{
private:
	int account_number;
	float balance;
public:
	void account_details(const int& id, float money);
	float despoit(float put);
	float withdraw(float take);
	void get_info();
};
