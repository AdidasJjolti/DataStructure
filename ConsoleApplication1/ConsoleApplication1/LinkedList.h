#pragma once
#include <list>
#include <algorithm>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

//struct SinglyLinkedList
//{
//	Node* _head;
//	int _count;
//};

class LinkedList
{
public:

	//SinglyLinkedList _list;
	//Node* _head = nullptr;

	Node* _head;
	int _count;

	LinkedList();
	Node* CreateNode();
	void Add(int x);
	void Insert(int index, int x);
	void Delete(int index);
	bool IsEmpty();
	int FindIndex(int x);
	bool Contains(int x);
	void Reverse();
	list<int> GetRange(int index, int range);
	void PrintList();
};