#include "stdafx.h"
#include "BankAccount.h"
#include <iostream>
using namespace std;

int main() {
	BankAccount account;
	Transaction t(30.01);
	account + t;
	Transaction k(-5.40);
	account + k;
	account.printBalance();
	account.printTransactionHistory();
    return 0;
}

