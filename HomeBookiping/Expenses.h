#pragma once
#include "Transaction.h"

class Expenses :  Transaction
{
protected:
	string _objOfCons;	//obj of consumption
	
public:
	Expenses() :Transaction(), _objOfCons("") {};
	Expenses(Date date, float money, string objOfCons) :Transaction(date, money), _objOfCons(objOfCons) {};
	Expenses(string objOfCons) :Transaction(), _objOfCons(objOfCons) {};
	~Expenses() {};

	string getObjOfCons() { return _objOfCons; }
	void setObjOfCons(string& objOfCons) { _objOfCons = objOfCons; };

	friend istream& operator>>(istream& in, Expenses& obj);
	friend ostream& operator<<(ostream& out, Expenses& obj);
};