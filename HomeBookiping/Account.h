#pragma once
#include "BankAccount.h"
#include <vector>

template <typename T>
class Account {
private:
	string _login;
	string _password;
	string _type;
	vector<BankAccount> _bankAcc;
	vector<T> s;

public:
	Account() :
		_login(""), _password(""), _type(""), _bankAcc()  {};

	Account(string login, string password, string type) :
		_login(login), _password(password), _type(type), _bankAcc() {};

	Account(string login, string password, string type, vector<BankAccount> bankAcc) :
		_login(login), _password(password), _type(type), _bankAcc(bankAcc) {};

	~Account() {};


	friend istream& operator>>(istream& in, Account& obj);
	friend ostream& operator<<(ostream& out, Account& obj);

	void addBankAccount();
	void printBankAccount();

	/*void addTransaction();
	void printTransaction();*/
};