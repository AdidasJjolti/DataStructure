#pragma once


class Queue
{
private:
	int _queue[5] = { 0, };
	int _head;
	int _rear;
public:
	Queue();

	bool IsEmpty();
	bool IsFull();
	void Enqueue(int x);
	int Dequeue();
	int GetSize();
};

