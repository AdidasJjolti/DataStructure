#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
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

	return 0;
}