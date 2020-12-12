#include "Expenses.h"
#include "Exception.h"

istream& operator>>(istream& in, Expenses& obj)
{
	in >> dynamic_cast<Transaction&> (obj);
	rewind(stdin);
	cout << "Object of consumption: ";

	obj._objOfCons = inputString(30);

	return in;
}

ostream& operator<<(ostream& out, Expenses& obj) {
	out << dynamic_cast<Transaction&> (obj) << setw(17) << obj._objOfCons << "|";

	return out;
}
