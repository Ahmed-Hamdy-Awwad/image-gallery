#include "list.h"

List::List(int data)
{
	Node *newNode = new Node;
	newNode->data = data;
	newNode->prev = 0;
	newNode->next = 0;
	last = newNode;
	cursor = newNode;
}
void List::add(int data)
{
	Node *newNode = new Node;
	newNode->data = data;
	newNode->prev = last;
	last->next = newNode;
	newNode->next = 0;
	last = newNode;
	cursor = newNode;
}
Node *List::getPrev()
{
	cursor = cursor->prev;
	return cursor;
}
Node *List::getNext()
{
	cursor = cursor->next;
	return cursor;
}
int List::getData()
{
	return cursor->data;
}