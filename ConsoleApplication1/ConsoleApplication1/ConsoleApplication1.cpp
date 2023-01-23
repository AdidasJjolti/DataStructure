#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include<stack>
#include<queue>

#define MAX_SIZE 5
#define NULL 0

using namespace std;

int x;
stack<int> st;
queue<int> qu;

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

	cout << "If empty? is 1, it's empty. If not, not empty." << endl;
	cout << "Empty? " << st.empty() << endl;
	st.push(1);
	cout << st.top() << " is pushed." << endl;
	st.push(2);
	cout << st.top() << " is pushed." << endl;
	cout << "Size is " << st.size() << endl;
	cout << st.top() << " is popped." << endl;
	st.pop();
	st.push(3);
	cout << st.top() << " is pushed." << endl;
	st.push(4);
	cout << st.top() << " is pushed." << endl;
	st.push(5);
	cout << st.top() << " is pushed." << endl;
	cout << "Size is " << st.size() << endl;
	int size = st.size();
	for (int i = 0; i < size; i++)
	{
		cout << st.top() << " is popped." << endl;
		st.pop();
	}
	cout << "Size is " << st.size() << endl;
	cout << "Empty? " << st.empty() << endl;
	cout << "'-----------------" << endl;

	/*
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
	*/

	cout << "The size of qu is " << qu.size() << endl;
	qu.push(1);
	cout << qu.back() << " is pushed." << endl;
	qu.push(2);
	cout << qu.back() << " is pushed." << endl;
	qu.push(3);
	cout << qu.back() << " is pushed." << endl;
	cout << "Size is " << qu.size() << endl;
	cout << "Front is " << qu.front() << ", Rear is " << qu.back() << endl;
	qu.pop();
	cout << "Something is popped." << endl;
	cout << "Front is " << qu.front() << ", Rear is " << qu.back() << endl;
	qu.push(4);
	cout << qu.back() << " is pushed." << endl;
	qu.push(5);
	cout << qu.back() << " is pushed." << endl;
	qu.push(6);
	cout << qu.back() << " is pushed." << endl;
	cout << "Front is " << qu.front() << ", Rear is " << qu.back() << endl;

	int qsize = qu.size();
	for (int i=0; i < qsize; i++ )
	{
		cout << qu.front() << " is popped." << endl;
		qu.pop();
	}
	cout << "Empty? " << qu.empty() << endl;


	return 0;
}