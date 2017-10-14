#include "stdafx.h"
#include "BankAccount.h"
#include <iomanip>

BankAccount::BankAccount() {
	balance = 0;
}

BankAccount::~BankAccount() { }

void BankAccount::printTransactionHistory() const {
	
	for (auto const& value : transactionHistory) {
		string action;
		if (value.getAmount() > 0)
			action = "Deposited ";
		else
			action = "Withdrawn ";
		cout << setprecision(2) << fixed;
		cout << action << euroSign << " " << value.getAmount() << ", on: " << value.getDate() << " at: " << value.getTime() << endl;
	}

	/*vector<Transaction>::iterator i;
	for (i = transactionHistory.begin(); i != transactionHistory.end(); ++i) {
		string action;
		if (i->getAmount() > 0)
			action = "Deposited ";
		else
			action = "Withdrawn ";
		cout << setprecision(2) << fixed;
		cout << action << euroSign << " " <<i->getAmount() <<   ", on: " << i->getDate() << " at: " << i->getTime() << endl;
	}*/
}

void BankAccount::printBalance() const {
	cout << euroSign << " " <<  "Current balance: " << balance << endl;
}

const long double BankAccount::getBalance() const {
	return balance;
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
	addToBalance(t.getAmount());
}


ostream& operator<<(ostream& stream, const BankAccount& account) {
	account.printBalance();
	account.printTransactionHistory();
	return stream;
}