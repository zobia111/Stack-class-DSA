#pragma once
class Stack
{
private:



	int stackTop = -1;
	int stacksize;
	int *stackArray;

public:

	Stack(int stackSize);

	bool isEmpty();
	bool isFull();
	int push(int value);
	int pop();
	int Top();


	~Stack();
};



