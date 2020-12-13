#include "Account.h"
#include "Exception.h"

istream& operator>>(istream& in, Account& obj)
{
	rewind(stdin);
	cout << "Login: ";
	obj._login = inputString(17);

	rewind(stdin);
	cout << "Password: ";
	obj._password = inputString(17);
	return in;
}

ostream& operator<<(ostream& out, Account& obj) {
	out << "|" << setw(17) << obj._login << "|" << setw(17) <<  "|";
	return out;
}
