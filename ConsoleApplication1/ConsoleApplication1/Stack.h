#pragma once
#define MAX_SIZE 5
#define NULL 0
using namespace std;


class Stack
{
private:
	int size;
	int top;
	int stack[5] = {0, };

public:
	Stack();
	void Push(int x);
	int Pop();
	bool IsEmpty();
	int GetSize();
	int GetTop();
};

