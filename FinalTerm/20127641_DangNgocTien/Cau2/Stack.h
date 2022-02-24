#pragma once
#include <iostream>
using namespace std;

// define default capacity of stack
#define CAP 10
// Class for stack
template <class X>
class stack
{
	X* arr;
	int top; // vi tri tren cung
	int capacity;
public:
	stack(int capacity = CAP) // constructor
	{
		this->capacity = capacity;
		arr = new X[capacity];
		top = -1;
	}
	void push(X);
	X pop();
	X peek();
	int size();
	bool isEmpty();
	bool isFull();
	// destructor
	~stack() {
		delete[] arr;
	}
};


template<typename X>
void stack<X>::push(X gt)
{
	if (!isFull())
	{
		top++;
		arr[top] = gt;
	}
	else
	{
		cout << "stack da day!" << endl;
	}

}

template<typename X>
X stack<X>::pop()
{
	if (!isEmpty())
	{
		int temp = arr[top];
		top--;
		return temp;
	}
	else
	{
		cout << "stack rong." << endl;
	}
}

template<typename X>
X stack<X>::peek()
{
	if (!isEmpty())
	{
		return arr[top];
	}
	return nullptr;
}


template<typename X>
bool stack<X>::isEmpty()
{
	if (top == -1)
		return true;
	return false;
}

template<typename X>
bool stack<X>::isFull()
{
	if (top == capacity-1)
		return true;
	return false;
}

template<typename X>
int stack<X>::size()
{
	return top;
}