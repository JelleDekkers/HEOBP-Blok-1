#pragma once
#include <vector>
#include "Transaction.h"
#include <iostream>
using namespace std;

class BankAccount {
public:
	BankAccount();
	~BankAccount();
	void printTransactionHistory();
	void printBalance();
	const void addToBalance(const long double amount);

	void operator +(const Transaction& t);
	void operator -(const Transaction& t);

	const long double test;

private:
	long double balance;
	vector<Transaction> transactionHistory;
};

