#pragma once
#include <list>
#include <algorithm>
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
	int FindIndex(int x);
	bool Contains(int x);
	void Reverse();
	list<int> GetRange(int index, int range);
};