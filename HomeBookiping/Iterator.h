#pragma once
#include"Node.h"

template<typename T>
class Iterator {

public:
	Node<T>* curr;

public:
	Iterator(Node<T>* current = nullptr);

	void operator++ (void);
	void operator-- ();
	void operator= (T data);
	void operator = (Node<T>* tmp);
	T& operator*(void);
	bool operator==(Node<T>* tmp);
	bool operator!=(Node<T>* tmp);
	void operator+=(const int& tmp);
};

#include "Iterator.inl"