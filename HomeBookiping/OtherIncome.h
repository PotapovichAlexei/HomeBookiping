#pragma once
#include "Income.h"

class OtherIncome : public Income
{
private:
	float _perTax; //percentage of contribution
public:
	OtherIncome() : Income(), _perTax(0.0) {};
	OtherIncome(bool obligatory, Date date, float money, float dirtyMoney, string source, float perTax) :
		Income(obligatory, date, money, dirtyMoney, source), _perTax(perTax) {};
	~OtherIncome() {};

	float getPerTax() { return _perTax; }
	void setPerTax(float& percent) { _perTax = percent; };

	friend istream& operator>>(istream& in, OtherIncome& obj);
	friend ostream& operator<<(ostream& out, OtherIncome& obj);

	void trueIncome();
};