#include "stdafx.h"
#include "BankAccount.h"

BankAccount::BankAccount() {
	balance = 0;
}

BankAccount::~BankAccount() { }

void BankAccount::printTransactionHistory() {
	vector<Transaction>::iterator i;
	for (i = transactionHistory.begin(); i != transactionHistory.end(); ++i) {
		string action;
		if (i->getAmount() > 0)
			action = "Deposited ";
		else
			action = "Withdrawn ";
		cout << action << i->getAmount() <<  ", on: " << i->getDate() << " at: " << i->getTime() << endl;
	}
}

void BankAccount::printBalance() {
	cout << "Current balance: " << balance << endl;
}

const void BankAccount::addToBalance(const long double amount) {
	balance += amount;
}

void BankAccount::operator+(const Transaction& t) {
	transactionHistory.push_back(t);
	addToBalance(t.getAmount());
}

void BankAccount::operator-(const Transaction& t) {
	transactionHistory.push_back(t);
}
