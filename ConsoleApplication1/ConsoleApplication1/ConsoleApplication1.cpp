#include <iostream>
#include "Stack.h"
#include "Queue.h"

#define MAX_SIZE 5
#define NULL 0

using namespace std;

int main()
{
	/*
	Stack stack;

	stack.Pop();
	stack.Push(1);
	stack.Push(2);
	stack.Pop();
	stack.Push(3);
	stack.Push(4);
	stack.Pop();
	stack.Push(5);
	stack.Pop();
	stack.Pop();
	stack.Pop();
	stack.Pop();
	stack.Pop();
	*/

	Queue queue;
	int data;

	data = queue.Dequeue();
	cout << "[Dequeue] : " << data << endl;
	queue.Enqueue(0);
	queue.GetSize();
	queue.Enqueue(1);
	queue.GetSize();
	queue.Enqueue(2);
	queue.GetSize();
	data = queue.Dequeue();
	cout << "[Dequeue] : " << data << endl;
	queue.GetSize();
	queue.Enqueue(3);
	queue.GetSize();
	queue.Enqueue(4);
	queue.Enqueue(5);
	queue.Enqueue(6);
	queue.Enqueue(7);
	queue.GetSize();
	data = queue.Dequeue();
	cout << "[Dequeue] : " << data << endl;
	queue.GetSize();
	data = queue.Dequeue();
	cout << "[Dequeue] : " << data << endl;
	queue.GetSize();


	return 0;
}