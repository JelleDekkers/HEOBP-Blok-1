#pragma once
#include <string>
using namespace std;

class Transaction {
public:
	Transaction(long double amount);
	~Transaction();
	const long double getAmount();
	const string getDate();
	const string getTime();

private:
	long double amount;
	string date;
	string time;
};


