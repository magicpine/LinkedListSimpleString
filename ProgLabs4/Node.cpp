#include "Node.h"

Node::Node(const SimpleString &d, Node *n)
{
	data = new SimpleString(d.numofCharacters, d.characters);
	next = n;
}

Node::~Node()
{
	delete data;
	delete next;
}
