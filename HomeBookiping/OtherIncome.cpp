#include "OtherIncome.h"
#include "Exception.h"

istream& operator>>(istream& in, OtherIncome& obj)
{
	in >> dynamic_cast<Income&> (obj);
	rewind(stdin);
	cout << "Percentage of deposit: ";
	obj._perTax = inputFloatWS();

	return in;
}

ostream& operator<<(ostream& out, OtherIncome& obj) {
	out << dynamic_cast<Income&> (obj) << setw(17) << obj._perTax << "|";
	return out;
}
