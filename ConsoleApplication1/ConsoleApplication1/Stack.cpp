#include "Stack.h"
#include <iostream>

Stack::Stack() : size(5), top(-1) // ¸â¹ö ÀÌ´Ï¼È¶óÀÌÀú
{

}

void Stack::Push(int x)
{
	if (GetSize() >= MAX_SIZE)
	{
		return;
	}

	int index = GetSize();
	stack[index] = x;

	cout << "Push " << stack[index] << endl;
}

int Stack::Pop()
{
	if (IsEmpty())
	{
		cout << "Empty!" << endl;
		return -1;
	}

	int x = GetTop();
	int targetIdx = GetSize() - 1;
	stack[targetIdx] = NULL;
	
	cout << "Pop " << x << endl;
	return x;
}

bool Stack::IsEmpty()
{
	return GetSize() == 0;
}

int Stack::GetSize()
{
	int max = MAX_SIZE;
	int count = 0;

	for (int i = 0; i < max; i++)
	{
		if (stack[i] != NULL)
			count++;
	}

	size = count;
	return size;
}

int Stack::GetTop()
{
	top = stack[GetSize() - 1];
	cout << "Top " << top << endl;
	return top;
}
