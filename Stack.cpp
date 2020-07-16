
#include<iostream>
#include "Stack.h"




Stack::Stack(int stackSize)
{

	stackArray = new int[stackSize];
	stacksize = stackSize;

}

Stack::~Stack() {}

bool Stack::isEmpty() {
	if (stackTop == -1)
		return 1;
	else
		return 0;
}

bool Stack::isFull() {
	if (stackTop == (stacksize - 1))
		return 1;
	else {
		return 0;
	}


}

int Stack::push(int value) {
	if (Stack::isFull())
		std::cout << "Stack overflow" << std::endl;
	else

		stackArray[++stackTop] = value;
	return value;


}

int Stack::pop() {
	if (Stack::isEmpty())
	{
		std::cout << "stack underflow" << std::endl;
		return 0;
	}


	else
		return stackArray[stackTop--];

}

int Stack::Top() {

	if (Stack::isEmpty())
	{
		std::cout << "stack underflow" << std::endl;
		return 0;
	}

	else
		return stackArray[stackTop];

}

