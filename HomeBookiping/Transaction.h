#pragma once
#include "Date.h"
#include <iomanip>
#include <string.h>

//!!!Add DATE

class Transaction {
protected:
	Date _date;
	float _money;
	float _dirtyMoney;
	bool _obligatory;		// obligatory ( no - 0, yes - 1)
public: 
	//Constructors and Distructor
	Transaction() : _date(), _obligatory(0), _money(0.0), _dirtyMoney(0.0) {};
	Transaction(bool obligatory, Date date, float money, float dirtyMoney) : _obligatory(obligatory), _date(date), _money(money), _dirtyMoney(dirtyMoney) {};
	~Transaction() {};

	//Getters and Setters
	Date getDate() { return _date; }
	void setDate(Date date) { this->_date = date; }
	float getMoney() { return _money; }
	void setMoney(const float& money) { this->_money = money; }
	float getDirtyMoney() { return _dirtyMoney; }
	void setDirtyMoney(const float& money) { this->_money = _dirtyMoney; }
	bool getObligatory() { return _obligatory; }
	void setObligatory(const bool& obligatory) { this->_obligatory = obligatory; }

	friend istream& operator>>(istream& in, Transaction& obj);
	friend ostream& operator<<(ostream& out, Transaction& obj);
};