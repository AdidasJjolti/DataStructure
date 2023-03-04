#include "LinkedList.h"
#include <iostream>
using namespace std;


LinkedList::LinkedList()
{
	_head = nullptr;
	_count = 0;
}

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
	Node* headNode = CreateNode();

	if (newNode == nullptr)
	{
		cout << "Null" << endl;
		return;
	}

	newNode->data = x;
	newNode->next = nullptr;

	if (_head == nullptr)
	{
		_head = headNode;
	}
	
	Node* temp = _head;

	while (temp->next != nullptr)
	{
		temp = temp->next;
	}

	temp->next = newNode;

	_count++;

}

void LinkedList::Insert(int index, int x)
{
	if (index >= _count || index < 0)
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
	_count++;
}

void LinkedList::Delete(int index)
{
	if (_count <= index || index < 0)
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
	delete(target);
	_count--;
}

bool LinkedList::IsEmpty()
{
	return (_head->next == nullptr);
}

int LinkedList::FindIndex(int x)
{
	int index = 0;
	Node* temp = _head->next;
	for (int i = 0; i < _count; i++)
	{
		if (temp->data == x)
		{
			cout << "Index is " << index << endl;
			return index;
		}
		else
		{
			temp = temp->next;
			index++;
		}
	}
	cout << "Index Not Found"<< endl;
	return -1;
}

bool LinkedList::Contains(int x)
{
	bool isFound = false;
	Node* temp = _head->next;
	for (int i = 0; i < _count; i++)
	{
		if (temp->data == x)
		{
			isFound = true;
			break;
		}
		else
		{
			temp = temp->next;
		}
	}
	if (isFound == false)
	{
		cout << x << " Not Found" << endl;
	}
	else
	{
		cout << x << " is found." << endl;
	}
	return isFound;
}

void LinkedList::Reverse()
{
	Node* curr = _head->next;
	Node* prev = nullptr;
	Node* next = _head->next;

	while (curr != nullptr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	_head->next = prev;
}

LinkedList LinkedList::GetRange(int index, int range)
{
	Node* temp = _head->next;
	for (int i = 0; i < index; i++)
	{
		temp = temp->next;
	}

	LinkedList newList;

	for (int i = 0; i < min(range, _count - index + 1); i++)
	{
		newList.Add(temp->data);
		temp = temp->next;
	}

	return newList;
}

void LinkedList::PrintList()
{
	cout << "List : ";
	Node* temp = _head->next;

	for (int i = 0; i < _count; i++)
	{
		cout << temp->data << " -> ";
		temp = temp->next;
	}

	cout <<"NULL"<< endl;
}
