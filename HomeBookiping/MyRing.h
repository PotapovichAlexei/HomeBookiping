#pragma once
#include"Iterator.h"
#include"BankAccount.h"
#include <vector>

template<typename T>
class Account
{
public:
	Node<T>* head;
	Node<T>* tail;
	int size;

	string _login;
	string _password;
	vector<BankAccount> _bankAcc;

public:
	Account();
	Account(Account& obj);
	Account(T& data);
	~Account();

	void pushToFront(T& data);					//добавить элемент в начало кольца
	void pushToBack(T& data);					//добавить элемент в конец кольца
	void insert(T data, int index);				//вставить элемент в кольцо по указанному индексу
	void inputRing(int index);					//ввести элемент по индексу
		
	void deleteElement(int index);				//удаление элемента кольца по указанному индексу					
	void clear();								//очистить список
	
	void sort();								//Сортировка кольца по возврастанию 
	void find(Account<T>& NewMyRing);			//Поиск элемента кольца

	void print();								//Вывод кольца на экран
	Node<T>* operator[](const int index);		//ссыылк на элемент кольца


	int getSize() { return size; }				//количетсво элементов в кольце
	Node<T>* getHead() { return this->head; };	//Конец кольца
	Node<T>* getTail() { return this->tail; };	//Начало кольца


	friend istream& operator>>(istream& in, Account& obj);
	friend ostream& operator<<(ostream& out, Account& obj);

	void addBankAccount();
	void printBankAccount();
};

#include "MyRing.inl"