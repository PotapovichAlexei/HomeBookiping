#pragma once
#include "Date.h"
#include <iomanip>
#include <string.h>

//!!!Add DATE

class Transaction {
protected:
	Date _date;
	float _money;
public: 
	//Constructors and Distructor
	Transaction() : _money(0.0) {};
	Transaction(Date date, float money) : _date(date), _money(money) {};
	~Transaction() = default;

	//Getters and Setters
	Date getDate() { return _date; }
	void setDate(Date date) { this->_date = date; }
	float getMoney() { return _money; }
	void setMoney(const float& money) { this->_money= money; }

	friend istream& operator>>(istream& in, Transaction& obj);
	friend ostream& operator<<(ostream& out, Transaction& obj);
};