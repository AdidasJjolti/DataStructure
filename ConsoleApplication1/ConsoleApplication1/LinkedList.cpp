#include "LinkedList.h"
#include <iostream>
using namespace std;


Node* LinkedList::CreateNode()
{
	Node* temp = new Node();

	if (temp == nullptr)
	{
		cout << "Memory Allocation Failed." << endl;
		return nullptr;
	}

	return temp;
}

void LinkedList::Add(int x)
{
	Node* newNode = CreateNode();

	if (newNode == nullptr)
	{
		cout << "Null" << endl;
		return;
	}

	newNode->data = x;
	newNode->next = nullptr;

	Node* temp = _head;

	while (temp->next != nullptr)
	{
		temp = temp->next;
	}

	temp->next = newNode;

	_list._count++;

}

void LinkedList::Insert(int index, int x)
{
	if (index >= _list._count || index < 0)
	{
		return;
	}

	Node* newNode = CreateNode();

	if (newNode == NULL)
	{
		cout << "NULL" << endl;
		return;
	}

	Node* temp = _head;

	for (int i = 0; i < index; i++)
	{
		temp = temp->next;
	}

	newNode->data = x;
	newNode->next = temp->next;
	temp->next = newNode;
}

void LinkedList::Delete(int index)
{
	if (_list._count <= index || index < 0)
	{
		return;
	}

	Node* temp = _head;

	for (int i = 0; i < index; i++)
	{
		temp = temp->next;
	}

	Node* target = temp->next;
	temp->next = target->next;
	Delete(target->data);
}

bool LinkedList::IsEmpty()
{
	return (_head->next == nullptr);
}
