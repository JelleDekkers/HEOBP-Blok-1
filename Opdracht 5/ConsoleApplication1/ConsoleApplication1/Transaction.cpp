#include "stdafx.h"
#include "Transaction.h"

Transaction::Transaction(long double amount) {
	this->amount = amount;
	date = __DATE__;
	time = __TIME__;
}

Transaction::~Transaction() { }

const long double Transaction::getAmount() {
	return amount;
}

const string Transaction::getDate() {
	return date;
}

const string Transaction::getTime() {
	return time;
}
