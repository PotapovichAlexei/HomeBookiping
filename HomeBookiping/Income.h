#pragma once
#include "Transaction.h"

class Income: public Transaction
{
protected:
	string _source;

public:
	Income() :Transaction(), _source("") {};
	Income(bool obligatory, Date date, float money, float dirtyMoney, string source) :Transaction(obligatory, date, money, dirtyMoney), _source(source) {};
	//Income(string source) :Transaction(), _source(source) {};
	~Income(){};

	string getSource() { return _source; }
	void setSource(string& source) { _source = source; };

	friend istream& operator>>(istream& in, Income& obj);
	friend ostream& operator<<(ostream& out, Income& obj);

};