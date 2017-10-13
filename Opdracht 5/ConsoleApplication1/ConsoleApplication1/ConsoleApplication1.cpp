#include "stdafx.h"
#include "BankAccount.h"
#include <iostream>
using namespace std;

int main() {
	BankAccount account;
	Transaction* t = new Transaction(30.01);
	account + *t;
	t = new Transaction(-5.40);
	account + *t;
	delete(t);
	//account.printBalance();
	//account.printTransactionHistory();
	cout << account << endl;
    return 0;
}
