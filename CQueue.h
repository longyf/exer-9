#ifndef cqueue_h
#define cqueue_h
#include <iostream>
#include <stack>
#include <stdexcept>

using namespace std;

template <typename T> 
class CQueue {
	public:
		CQueue(void);
		~CQueue(void);
		void appendTail(const T &node);
		T deleteHead();

	private:
		stack<T> stack1;
		stack<T> stack2;
};

template <typename T>
CQueue<T>::CQueue(void) {
}

template <typename T>
CQueue<T>::~CQueue(void) {
}

template <typename T>
void CQueue<T>::appendTail(const T &node) {
	stack1.push(node);
}

template <typename T>
T CQueue<T>::deleteHead() {

	//Two stacks are empty.
	if (stack1.empty()&&stack2.empty()) 
		throw runtime_error("Can not delete the element of an empty queue.");

	//If stack2 is empty, push elements from stack1 to stack2.	
	if (stack2.empty()) {
		while (!stack1.empty()) {
			stack2.push(stack1.top());
			stack1.pop();
		}
	}

	//Delete the top element of stack2.
	T temp=stack2.top();
	stack2.pop();
	return temp;
}
#endif
