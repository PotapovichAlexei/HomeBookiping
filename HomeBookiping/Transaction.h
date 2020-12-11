#pragma once
#include "mainHeader.h"


class Transaction {
private:
	Date date_;
	float money_;
public: 
	//Constructors and Distructor
	Transaction();
	~Transaction();

	//Getters and Setters
	Date getDate() { return date_; }
	void setDate(Date date) { this->date_ = date; }
	float getMoney() { return money_; }
	void getMoney(float money) { this->money_= money; }

};