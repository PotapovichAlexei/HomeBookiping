#include "Income.h"
#include "Exception.h"

istream& operator>>(istream& in, Income& obj)
{
	//rewind(stdin);
	//in >> obj._date;
	in >> dynamic_cast<Transaction&> (obj);
	rewind(stdin);
	cout << "Source: ";
	obj._source = inputString(30);

	return in;
}

ostream& operator<<(ostream& out, Income& obj) {
	out << dynamic_cast<Transaction&> (obj) << setw(17) << obj._source << "|";

	return out;
}
