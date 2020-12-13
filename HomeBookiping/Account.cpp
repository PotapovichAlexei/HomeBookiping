#include "Account.h"
#include "Exception.h"

istream& operator>>(istream& in, Account& obj)
{
	rewind(stdin);
	cout << "Login: ";
	obj._login = inputString(17);

	rewind(stdin);
	cout << "Password: ";
	obj._password = stringExceptRussian(17);
	return in;
}

ostream& operator<<(ostream& out, Account& obj) {
	out << "|" << setw(17) << obj._login << "|" << setw(17) <<  "|";
	return out;
}

void Account::addBankAccount()
{
	BankAccount bankAcc;
	cin >> bankAcc;
	_bankAcc.push_back(bankAcc);
}

void Account::printBankAccount()
{
	cout << "Your bank accounts: " << endl;
	for (int i = 0; i < this->_bankAcc.size(); i++)
		cout << this->_bankAcc[i];
}

//void Account::addTransaction()
//{
//	Transaction newTransaction;
//	cin >> newTransaction;
//	_operation.push_back(newTransaction);
//}
//
//void Account::printTransaction()
//{
//	for (int i = 0; i < this->_operation.size(); i++)
//		cout << this->_operation[i];
//}
