#include "Transaction.h" 
#include "Income.h" 
#include "Expenses.h"
#include "Deposit.h"
#include "OtherIncome.h"
#include "Account.h"


int main() {
	Account test;
	cin >> test;
	cout << test<< endl;
	test.addTransaction();
	cout << test;
	return 0;
}