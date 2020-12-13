#include "Transaction.h"
#include "Exception.h"

istream& operator>>(istream& in, Transaction& obj)
{
	rewind(stdin);
	cout << "Obligatory: ";
	obj._obligatory =inputInt(0,1);
	
	rewind(stdin);
	in >> obj._date;
	
	rewind(stdin);
	cout << "Money: ";
	obj._dirtyMoney = inputFloatWS();
	obj._money = obj._dirtyMoney;
	return in;
}

ostream& operator<<(ostream& out, Transaction& obj) {
	out << "|" << obj._date << setw(17) << obj._dirtyMoney << "|" << setw(17) << obj._money <<  "|";
	return out;
}
