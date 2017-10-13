#pragma once
#include <vector>
#include "Transaction.h"
#include <iostream>
using namespace std;

class BankAccount {
public:
	BankAccount();
	~BankAccount();
	void printTransactionHistory() const;
	void printBalance() const;
	const long double getBalance() const;
	const void addToBalance(const long double amount);

	void operator +(const Transaction& t);
	void operator -(const Transaction& t);

	friend ostream& operator<<(ostream& stream, const BankAccount& account);

private:
	long double balance;
	vector<Transaction> transactionHistory;
	const string euroSign = "EURO";
};

