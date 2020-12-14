#pragma once
//#include"Header.h"

template<typename T>
class Node
{
public:
	Node* next;
	Node* prev;
	T data;
public:
	Node(T data, Node* next, Node* prev);
	void swap(T& data);
	~Node();
};

#include "Node.inl"