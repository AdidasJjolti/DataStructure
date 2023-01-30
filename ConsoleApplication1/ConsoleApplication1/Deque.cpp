#include "Deque.h"
#include <iostream>
using namespace std;


void Deque::PushBack(int x)
{
	if (GetSize() == MAX_SIZE)
	{
		cout << "Full" << endl;
		return;
	}

	_back++;
	_deque[_back] = x;
	cout << "PushBack : " << x << endl;
}

void Deque::PushFront(int x)
{
	if (GetSize() == MAX_SIZE)
	{
		cout << "Full" << endl;
		return;
	}

	for (int i = _back; i > -1; i--)
	{   // 하나씩 인덱스 뒤로 밀기
		_deque[i + 1] = _deque[i];
	}

	_back++;
	_deque[0] = x;
	cout << "PushFront : " << x << endl;
}

int Deque::PopBack()
{
	if (IsEmpty())
	{
		return NULL;
	}
	
	int x = _deque[_back];
	_deque[_back] = NULL;
	_back--;
	cout << "PopBack : " << x << endl;

	return x;
}

int Deque::PopFront()
{
	if (IsEmpty())
	{
		return NULL;
	}

	int x = _deque[0];

	for (int i = 1; i <= _back; i++)
	{   // 하나씩 인덱스 앞으로 당기기
		_deque[i - 1] = _deque[i];
	}

	_deque[_back] = NULL;
	_back--;
	cout << "PopFront : " << x << endl;

	return 0;
}

bool Deque::IsEmpty()
{
	if (_front == _back)
	{
		cout << "Empty" << endl;
		return true;
	}

	return false;
}

int Deque::GetSize()
{
	return _back - _front;
}

void Deque::PrintDeque()
{
	cout << "Deque : ";

	for (int i = 0; i <= _back; i++)
	{
		cout << _deque[i] << " ";
	}

	cout << endl;
}
