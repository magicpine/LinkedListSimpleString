#include <iostream>
#include <string>
#include "List.h"

List::List()
{
	head = nullptr;
}

List::~List()
{
	while (head != nullptr)
	{
		SimpleString tmp;
		pop_back(tmp);
	}
	delete head;
}
// add this method your list class
void List::Print() 
{
	static int testNum = 0;
	testNum++;

	Node *cur = head;
	std::cout << std::endl << "____" << testNum << "___" << std::endl;
	while (cur != nullptr)
	{
		if (cur->data)
		{
			if (cur->data->characters)
			{
				std::cout << cur->data->characters << " ";


			}
		}
		cur = cur->next;
	}
	std::cout << std::endl;

}
void List::insertBefore(Node *loc, const SimpleString &d)
{
	Node *current = head;
	Node *shadow = head;
	while (current != nullptr)
	{
		if (current == loc)
		{
			Node *tmp = new Node(d);
			tmp->next = current;
			if (current == head)
				head = tmp;
			else
				shadow->next = tmp;
			return;
		}
		shadow = current;
		current = current->next;
	}
}

void List::insertAfter(Node *loc, const SimpleString &d)
{
	Node *current = head;
	while (current != nullptr)
	{
		if (current == loc)
		{
			Node *tmp = new Node(d);
			tmp->next = current->next;
			current->next = tmp;
			return;
		}
		current = current->next;
	}
}

void List::push_back(const SimpleString &d)
{
	Node *current = head;
	Node *tmp = new Node(d);
	//Nothing in the list
	if (current == nullptr)
	{
		tmp->next = nullptr;
		head = tmp;
		return;
	}
	while (current != nullptr)
	{
		if (current->next == nullptr)
		{
			tmp->next = current->next;
			current->next = tmp;
			return;
		}
		else
			current = current->next;
	}
}

void List::push_front(const SimpleString &d)
{
	Node *current = head;
	Node *tmp = new Node(d);
	//Nothing in the list
	if (current == nullptr)
	{
		tmp->next = nullptr;
		head = tmp;
		return;
	}
	tmp->next = current;
	head = tmp;
}

bool List::pop_back(SimpleString &d)
{
	Node *current = head;
	while (current != nullptr)
	{
		if (current->next == nullptr) // Only one item in the list
		{
			d = *current->data;
			head = nullptr;
			return true;
		}
		if ((current->next)->next == nullptr)
		{
			d = *current->next->data;
			current->next = nullptr;
			return true;
		}
		current = current->next;
	}
	return false;
}

bool List::pop_front(SimpleString &d)
{
	Node *current = head;
	if (current != nullptr)
	{
		d = *current->data;
		if (current->next == nullptr)
			head = nullptr;
		else
			head = current->next;
		return true;
	}
	return false;
}

void List::erase(Node *loc)
{
	Node *current = head;
	Node *shadow = head;
	while (current != nullptr)
	{
		if (current == loc)
		{
			Node *tmp = current;
			if (current == head)
				head = head->next;
			else
				shadow->next = current->next;
			return;
		}
		shadow = current;
		current = current->next;
	}
}

void List::displayToConsole()
{
	Node *current = head;
	std::string tmp;
	std::cout << "head --> ";
	tmp += "head --> ";
	while (current != nullptr)
	{
		for (int i = 0; i < current->data->numofCharacters; i++)
		{
			std::cout << current->data->characters[i];
			tmp += current->data->characters[i];
		}
		std::cout << " --> ";
		tmp += " --> ";
		current = current->next;
	}
	std::cout << "NULL" << std::endl << std::endl;
}

Node* List::search(const SimpleString &d)
{
	Node *current = head;
	while (current != nullptr)
	{
		if (current->data->isEqual(d))
			return current;
		current = current->next;
	}
	return nullptr;
}