#include "stdafx.h"
#include "Transaction.h"

Transaction::Transaction(long double amount) {
	this->amount = amount;
	date = __DATE__;
	time = __TIME__;
}

Transaction::~Transaction() { }

const long double Transaction::getAmount() const {
	return amount;
}

const string Transaction::getDate() const {
	return date;
}

const string Transaction::getTime() const {
	return time;
}
