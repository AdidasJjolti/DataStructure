#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "Deque.h"
#include "LinkedList.h"
#include<stack>
#include<queue>
#include<list>
#include<vector>

#define MAX_SIZE 5
#define NULL 0

using namespace std;

int x;
stack<int> st;
queue<int> qu;

void Swap(int a, int b);
void Swap(int* a, int* b);

vector<int> vt;
vector<int>::iterator it;
vector<int>* vtptr1;
vector<int>* vtptr2;

vector<int> vt2(3, 10);   // 10 10 10

int main()
{
#pragma region Stack

	//Stack stack;

	//stack.Pop();
	//stack.Push(1);
	//stack.Push(2);
	//stack.Pop();
	//stack.Push(3);
	//stack.Push(4);
	//stack.Pop();
	//stack.Push(5);
	//stack.Pop();
	//stack.Pop();
	//stack.Pop();
	//stack.Pop();
	//stack.Pop();


	//cout << "If empty? is 1, it's empty. If not, not empty." << endl;
	//cout << "Empty? " << st.empty() << endl;
	//st.push(1);
	//cout << st.top() << " is pushed." << endl;
	//st.push(2);
	//cout << st.top() << " is pushed." << endl;
	//cout << "Size is " << st.size() << endl;
	//cout << st.top() << " is popped." << endl;
	//st.pop();
	//st.push(3);
	//cout << st.top() << " is pushed." << endl;
	//st.push(4);
	//cout << st.top() << " is pushed." << endl;
	//st.push(5);
	//cout << st.top() << " is pushed." << endl;
	//cout << "Size is " << st.size() << endl;
	//int size = st.size();
	//for (int i = 0; i < size; i++)
	//{
	//	cout << st.top() << " is popped." << endl;
	//	st.pop();
	//}
	//cout << "Size is " << st.size() << endl;
	//cout << "Empty? " << st.empty() << endl;
	//cout << "'-----------------" << endl;

#pragma endregion

#pragma region Queue

	//Queue queue;
	//int data;

	//data = queue.Dequeue();
	//cout << "[Dequeue] : " << data << endl;
	//queue.Enqueue(0);
	//queue.GetSize();
	//queue.Enqueue(1);
	//queue.GetSize();
	//queue.Enqueue(2);
	//queue.GetSize();
	//data = queue.Dequeue();
	//cout << "[Dequeue] : " << data << endl;
	//queue.GetSize();
	//queue.Enqueue(3);
	//queue.GetSize();
	//queue.Enqueue(4);
	//queue.Enqueue(5);
	//queue.Enqueue(6);
	//queue.Enqueue(7);
	//queue.GetSize();
	//data = queue.Dequeue();
	//cout << "[Dequeue] : " << data << endl;
	//queue.GetSize();
	//data = queue.Dequeue();
	//cout << "[Dequeue] : " << data << endl;
	//queue.GetSize();


	//cout << "The size of qu is " << qu.size() << endl;
	//qu.push(1);
	//cout << qu.back() << " is pushed." << endl;
	//qu.push(2);
	//cout << qu.back() << " is pushed." << endl;
	//qu.push(3);
	//cout << qu.back() << " is pushed." << endl;
	//cout << "Size is " << qu.size() << endl;
	//cout << "Front is " << qu.front() << ", Rear is " << qu.back() << endl;
	//qu.pop();
	//cout << "Something is popped." << endl;
	//cout << "Front is " << qu.front() << ", Rear is " << qu.back() << endl;
	//qu.push(4);
	//cout << qu.back() << " is pushed." << endl;
	//qu.push(5);
	//cout << qu.back() << " is pushed." << endl;
	//qu.push(6);
	//cout << qu.back() << " is pushed." << endl;
	//cout << "Front is " << qu.front() << ", Rear is " << qu.back() << endl;

	//int qsize = qu.size();
	//for (int i=0; i < qsize; i++ )
	//{
	//	cout << qu.front() << " is popped." << endl;
	//	qu.pop();
	//}
	//cout << "Empty? " << qu.empty() << endl;

#pragma endregion

#pragma region Deque

	/*Deque deque;
	deque.PopBack();
	deque.PopFront();
	deque.PushFront(1);
	deque.PushFront(2);
	deque.PushBack(3);
	deque.PrintDeque();
	deque.PopFront();
	deque.PopBack();
	deque.PrintDeque();
	deque.PopBack();
	deque.PopBack();
	deque.PrintDeque();*/

#pragma endregion

#pragma region Pointer
	//int* p1;
	//int num1 = 10;
	//int num2;
	//num2 = 20;

	//p1 = &num1;
	//int* p2 = &num2;

	//printf("before : %d, %d\n", num1, num2);
	//Swap(num1, num2);
	//printf("after : %d, %d\n\n", num1, num2);

	//printf("before : %d, %d\n", *p1, *p2);
	//Swap(p1, p2);
	//printf("after : %d, %d\n\n", *p1, *p2);

	//printf("before : %d, %d\n", num1, num2);
	//Swap(&num1, &num2);
	//printf("after : %d, %d\n\n", num1, num2);
#pragma endregion

#pragma region LinkedList

#pragma endregion

	//LinkedList _list;
	//_list.Add(1);
	//_list.Add(2);
	//_list.Add(3);
	//_list.PrintList();
	//_list.FindIndex(1);
	//_list.Contains(3);
	//_list.PrintList();
	//_list.Reverse();
	//_list.PrintList();
	//_list.Delete(0);
	//_list.PrintList();
	//LinkedList list = _list.GetRange(0, 1);
	//list.PrintList();
	//_list.GetRange(0, 1).PrintList();

vtptr1 = &vt;

vt.emplace_back(1);
vt.emplace_back(2);
vt.emplace_back(3);
vt.emplace_back(4);

for (int i = 0; i < vt.size(); i++)
{
	cout << vt[i] << " ";
}

cout << endl << "vtptr1 : " << vtptr1<< endl;


it = vt.begin();
it = vt.insert(it, 5);

vtptr2 = &vt;
cout << endl << "vtptr2 : " << vtptr2 << endl;

cout << "vt2 capacity with 3 elements is : " << vt2.capacity() << endl;

for (int i = 0; i < 20; i++)
{
	vt2.emplace_back(1);
	cout << "vt2 capacity after adding an element is : " << vt2.capacity() << endl;
	i++;
}


return 0;
}

void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Swap(int* a, int* b)
{
	int temp = *a;
	//int* temp2 = a;
	*a = *b;
	*b = temp;
}