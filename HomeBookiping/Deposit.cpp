#include "Deposit.h"
#include "Exception.h"

istream& operator>>(istream& in, Deposit& obj)
{
	in >> dynamic_cast<Income&> (obj);
	rewind(stdin);
	cout << "Percentage of deposit: ";
	obj._perDeposit = inputFloatWS();

	return in;
}

ostream& operator<<(ostream& out, Deposit& obj) {
	out << dynamic_cast<Income&> (obj) << setw(17) << obj._perDeposit << "|";
	return out;
}

void Deposit::trueDepositIncome()
{
	_money = _dirtyMoney * (1 + (_perDeposit / 100));
}
