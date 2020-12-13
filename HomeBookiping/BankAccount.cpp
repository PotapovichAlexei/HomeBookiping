#include"BankAccount.h"
#include"Exception.h"

istream& operator>>(istream& in, BankAccount& obj)
{
	rewind(stdin);
	cout << "Name of bank accounting: ";
	obj._nameBankAccount = inputString(17);

	rewind(stdin);
	cout << "Money: ";
	obj._amountMoney = inputFloatWS();
	return in;
}

ostream& operator<<(ostream& out, BankAccount& obj) {
	out << "|" << setw(17) << obj._nameBankAccount <<"|"<< setw(17) << obj._amountMoney<< "|";
	return out;
}
