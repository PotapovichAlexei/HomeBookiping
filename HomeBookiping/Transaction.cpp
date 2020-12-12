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
	obj._money = inputFloatWS();

	return in;
}

ostream& operator<<(ostream& out, Transaction& obj) {
	out << "|" << setw(17) << obj._money << "|";
	return out;
}
