#include "Transaction.h" 
#include "Income.h"
#include "Expenses.h"
#include "Deposit.h"
#include "OtherIncome.h"



int main() {
	OtherIncome test;
	cin >> test;
	cout << test<< endl;
	test.trueIncome();
	cout << test;
	return 0;
}