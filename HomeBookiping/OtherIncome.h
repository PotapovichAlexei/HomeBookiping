#pragma once
#include "Income.h"

class OtherIncome : Income
{
private:
	float _perTax; //percentage of contribution
public:
	OtherIncome() : Income(), _perTax(0.0) {};
	OtherIncome(bool obligatory, Date date, float money, string source, float perTax) :Income(obligatory, date, money, source), _perTax(perTax) {};
	~OtherIncome() {};

	float getPercent() { return _perTax; }
	void setPercent(float& percent) { _perTax = percent; };

	friend istream& operator>>(istream& in, OtherIncome& obj);
	friend ostream& operator<<(ostream& out, OtherIncome& obj);
};