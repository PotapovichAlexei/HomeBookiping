#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#define inputError 100 //Ошибка ввода 1xx

/*
		ERRORS
101 - wrong float input (type mismatch)
102 - wrong float input (range mismatch)
104 - wrong int input (type mismatch)
105 - wrong int input (range mismatch)
106 - wrong string input (lenght mismatch)
107 - wrong string input (forbidden characters)
	
*/


//Класс исключений
class Exception {
protected:
	string message;
public:
	Exception(string message) : message(message) { }
	virtual ~Exception() { }
};

//Класс исключений ввода
class ExceptionInput : public Exception {
private:
	int code;
public:
	ExceptionInput(int code, string message) : code(code + inputError), Exception(message) { }
	void printError() { cout << endl << "!!! Error " << this->code << " : " << this->message << " !!!" << endl; }
	~ExceptionInput()override { }
};


//Метод ввода числа float в заданном диапазоне 
inline float inputFloat(const float& minSize, const float& maxSize) {

	bool flag;
	float number;

	rewind(stdin);
	cin.clear();

	do {
		
		try {

			if (!(cin >> number) || cin.get() != '\n')
				throw ExceptionInput(1, "Type is incorrect");

			if (number < minSize || number > maxSize)
				throw ExceptionInput(2, "Range doesn't match");

			flag = false;
		}
		catch (ExceptionInput& obj) {
			flag = true;
			cin.clear();
			obj.printError();
			cout << "-! Enter the number between " << setprecision(3) << minSize << " and " << setprecision(3) << maxSize << " !-" << endl;
			cout << "Try again: ";
		}
		catch (...) {
			flag = true;
			cin.clear();
			cout << endl << "Uknown error" << endl;
			cout << "Try again:" << endl;
		}


	} while (flag);

	return number;
}


//Метод ввода числа float without size 
inline float inputFloatWS() {

	bool flag;
	float number;

	rewind(stdin);
	cin.clear();

	do {

		try {
			rewind(stdin);
			if (!(cin >> number) || cin.get() != '\n')
				throw ExceptionInput(1, "Type is incorrect");

			flag = false;
		}
		catch (...) {
			flag = true;
			cin.clear();
			cout << endl << "Uknown error" << endl;
			cout << "Try again:" << endl;
		}


	} while (flag);

	return number;
}


//Метод ввода числа int without size
inline int inputIntWS() {

	bool flag;
	int number;

	rewind(stdin);
	cin.clear();

	do
	{
		try
		{

			if (!(cin >> number) || cin.get() != '\n')
				throw ExceptionInput(4, "Type is incorrect");
		
			flag = false;
		}
		catch (...) {
			flag = true;
			cin.clear();
			cout << endl << "Uknown error" << endl;
			cout << "Try again:" << endl;
		}

	} while (flag);

	return number;
}

//Метод ввода числа int в заданном диапазоне 
inline int inputInt (const int& minSize, const int& maxSize) {

	bool flag;
	int number;
	
	rewind(stdin);
	cin.clear();

	do
	{
		try
		{

			if (!(cin >> number) || cin.get() != '\n')
				throw ExceptionInput(4, "Type is incorrect");
			//if (number == 33) throw;
			if (number < minSize || number > maxSize)
				throw ExceptionInput(5, "Range doesn't match");
				
			flag = false;
		}
		catch (ExceptionInput& obj) {
			flag = true;
			rewind(stdin);
			cin.clear();
			
			obj.printError();
			cout << "-! Enter the number between " << minSize << " and " << maxSize << " !-" << endl;
			cout << "Try again: ";
		}
		catch (...) {
			flag = true;
			cin.clear();
			cout << endl << "Uknown error" << endl;
			cout << "Try again:" << endl;
		}

	} while (flag);

	return number;
}

//Проверка на ввод английской строке
inline string inputString(const int& length) {

	bool flag;
	string str;

	rewind(stdin);
	cin.clear();

	do {
		try {

			getline(cin, str);

			if ( (str.size() > (length - 1)) || (str[0] == '\n' || str[0] == '\0') ) throw ExceptionInput(6, "Lenght error");

			for (int i = 0; i < str.size(); ++i) {
				if (((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))) {
					throw ExceptionInput(7, "The string contains forbidden characters");
				}
			}
			flag = false;
		}
		catch (ExceptionInput& obj) {
			flag = true;
			cin.clear();
			obj.printError();
			cout << "-! Enter information consisting of English " << " !-" << endl;
			cout << "Try again: ";
		}
		catch (...) {
			flag = true;
			cin.clear();
			cout << endl << "Unknown error" << endl;
			cout << "Try again: " << endl;
		}

	} while (flag);

	return str;
}


//Функция ввода строки содеражащие всё кроме русского языка
inline string stringExceptRussian(const int& length) {

	bool flag;
	string str;

	rewind(stdin);
	cin.clear();

	do {
		try {

			getline(cin, str);
			
			if ((str.size() > (length - 1)) || (str[0] == '\n' || str[0] == '\0')) throw ExceptionInput(6, "Lenght error");

			for (int i = 0; str[i]; ++i) {
				if ((str[i] >= 'а' && str[i] <= 'я') || (str[i] >= 'А' && str[i] <= 'Я')) {
					throw ExceptionInput(8, "The string contains forbidden characters");
				}
			}
			flag = false;
		}
		catch (ExceptionInput& obj) {
			flag = true;
			cin.clear();
			obj.printError();
			cout << "-! Enter information consisting of English and any character !-" << endl;
			cout << "Try again:" << endl;
		}
		catch (...) {
			flag = true;
			cin.clear();
			cout << endl << "Unknown error" << endl;
			cout << "-! Try again !-" << endl;
		}

	} while (flag);

	return str;
}
