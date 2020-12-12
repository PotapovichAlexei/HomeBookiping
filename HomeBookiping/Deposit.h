#pragma once
#include "Income.h"

class Deposit: Income
{
private:
	float _perDeposit; //percentage of contribution
public:
	Deposit() : Income(), _perDeposit(0.0) {};
	Deposit(bool obligatory,Date date, float money, string source, float percent) :Income(obligatory, date, money, source), _perDeposit(percent) {};
	~Deposit() {};

	float getPercent() { return _perDeposit; }
	void setPercent (float& percent) { _perDeposit = percent; };

	friend istream& operator>>(istream& in, Deposit& obj);
	friend ostream& operator<<(ostream& out, Deposit& obj);
};