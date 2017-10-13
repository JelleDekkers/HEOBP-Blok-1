#pragma once
#include <string>
using namespace std;

class Transaction {
public:
	Transaction(long double amount);
	~Transaction();
	const long double getAmount() const;
	const string getDate() const;
	const string getTime() const;

private:
	long double amount;
	string date;
	string time;
};


