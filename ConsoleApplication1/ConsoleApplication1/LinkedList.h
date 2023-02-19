#pragma once
using namespace std;

struct Node
{
	int data;
	Node* next;
};

class LinkedList
{
public:

	struct SinglyLinkeList
	{
		Node* _head;
		int _count;
	};

	SinglyLinkeList _list;

	Node* _head = nullptr;

	Node* CreateNode();
	void Add(int x);
	void Insert(int index, int x);
	void Delete(int index);
	bool IsEmpty();
};

