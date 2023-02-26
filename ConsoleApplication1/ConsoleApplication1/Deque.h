#pragma once
#define MAX_SIZE 5

class Deque
{
private:
	int _deque[5] = { 0, };
	int _front = -1;
	int _back = -1;

public:
	void PushBack(int x);
	void PushFront(int x);
	int PopBack();
	int PopFront();
	bool IsEmpty();
	int GetSize();
	void PrintDeque();
};

