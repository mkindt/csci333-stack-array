#include "Stack.h"
#include <iostream>

Stack::Stack(int initialSize) {
  theStack = new int[initialSize];
  	theStackCapacity = initialSize;
	top = 0;
}

Stack::~Stack() {
  delete[] theStack;
}

void Stack::push(int value) {
  //if theStack is full
  // create new stack twice as big
  // copy all elements to new stack
  // delete old stack
  // point old stack pointer to new stack

	if (top == theStackCapacity) {
		int * biggerStack;
		std::cout << "building new stack" << std::endl;
		biggerStack = new int[2*theStackCapacity];
		for (int i = 0; i < top; ++i)
			biggerStack[i]=theStack[i];
		delete[] theStack;
		theStack = biggerStack;
		theStackCapacity = 2*theStackCapacity;
	}

  theStack[top] = value;
  top++;
}

int Stack::pop() {
  top--;
  return theStack[top];
}

int Stack::peek() {
  return theStack[top-1];
}

int Stack::size() {
  return top;
}
