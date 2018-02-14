#pragma once
#include "SimpleString.h"

class Node
{
public:
	SimpleString *data;
	Node *next;
	//Create a SimpleString pointed to by data.
	//next set to n
	Node(const SimpleString &d, Node *n = 0);
	~Node();
};


