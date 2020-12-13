#pragma once
#include "BankAccount.h"
#include <vector>

class Account {
private:
	string _login;
	string _password;
	string _type;
	vector<BankAccount> _bankAcc;
	vector<Transaction> _operation;

public:
	Account() :
		_login(""), _password(""), _type(""), _bankAcc(), _operation() {};

	Account(string login, string password, string type) :
		_login(login), _password(password), _type(type), _bankAcc(), _operation() {};

	Account(string login, string password, string type, vector<BankAccount> bankAcc) :
		_login(login), _password(password), _type(type), _bankAcc(bankAcc), _operation() {};

	Account(string login, string password, string type,  vector<Transaction> operation) :
		_login(login), _password(password), _type(type), _bankAcc(), _operation(operation) {};

	Account(string login, string password, string type, vector<BankAccount> bankAcc, vector<Transaction> operation) :
		_login(login), _password(password), _type(type), _bankAcc(bankAcc), _operation(operation) {};

	~Account() {};


	friend istream& operator>>(istream& in, Account& obj);
	friend ostream& operator<<(ostream& out, Account& obj);
};