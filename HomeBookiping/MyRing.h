#pragma once
#include"Header.h"
//#include"Node.h"
#include "Iterator.h"


template<typename T>
class MyRing
{
public:
	Node<T>* head;
	Node<T>* tail;
	int size;

public:
	MyRing();
	MyRing(MyRing& obj);
	MyRing(T& data);
	~MyRing();

	void pushToFront(T& data);					//добавить элемент в начало кольца
	void pushToBack(T& data);					//добавить элемент в конец кольца
	void insert(T data, int index);				//вставить элемент в кольцо по указанному индексу
	void inputRing(int index);					//ввести элемент по индексу
		
	void deleteElement(int index);				//удаление элемента кольца по указанному индексу					
	void clear();								//очистить список
	
	void sort();								//Сортировка кольца по возврастанию 
	void find(MyRing<T>& NewMyRing);			//Поиск элемента кольца

	void print();								//Вывод кольца на экран
	Node<T>* operator[](const int index);		//ссыылк на элемент кольца


	int getSize() { return size; }				//количетсво элементов в кольце
	Node<T>* getHead() { return this->head; };	//Конец кольца
	Node<T>* getTail() { return this->tail; };	//Начало кольца
};

