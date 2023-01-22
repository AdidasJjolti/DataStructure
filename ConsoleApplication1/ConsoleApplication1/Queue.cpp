#include "Queue.h"
#include <cstdlib>   // 정수형 반환
//#include <cmath>   // double형 반환
#include <iostream>

#define MAX_SIZE 5
#define NULL 0

using namespace std;

Queue::Queue() : _head(-1), _rear(-1)
{

}

bool Queue::IsEmpty()
{
	if (_head == _rear)
	{
		cout << "Empty!" << endl;
		return true;
	}

	return false;
}

bool Queue::IsFull()
{
	if (_rear == MAX_SIZE -1)
	{
		cout << "Full!" << endl;
		return true;
	}

	return false;
}

void Queue::Enqueue(int x)
{
	if (IsFull())
	{
		return;
	}

	_queue[++_rear] = x;
	cout<< "[Head] : " << _head << ", [Rear] : " << _rear<< ", [Enqueue] : " << x << endl;
}

int Queue::Dequeue()
{
	if (IsEmpty())
	{
		cout << "Empty!" << endl;
		_head = -1;
		_rear = -1;
		return -1;
	}

	int x = _queue[_head + 1];
	//_queue[_head] = NULL;
	for (int i = 0; i < MAX_SIZE - 1; i++)
	{
		_queue[i] = _queue[i + 1];
	}
	_queue[(MAX_SIZE - 1)] = NULL;
	--_rear;

	cout << "[Head] : " << _head << ", [Rear] : " << _rear << endl;
	return x;
}

int Queue::GetSize()
{
	if (IsEmpty())
	{
		return 0;
	}

	int size = _rear - _head;
	cout << "[Size] : " << size << endl;
	return size;
}
