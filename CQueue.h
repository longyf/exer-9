#ifndef cqueue_h
#define cqueue_h
#include <iostream>
#include <stack>
#include <stdexcept>

using namespace std;

template <class T> 
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

template <class T>
CQueue<T>::CQueue(void) {
}

template <class T>
CQueue<T>::~CQueue(void) {
}

template <class T>
void CQueue<T>::appendTail(const T &node) {
	while (!stack2.empty()) {
		stack1.push(stack2.top());
		stack2.pop();
	}
	stack1.push(node);
}

template <class T>
T CQueue<T>::deleteHead() {
	while (!stack1.empty()) {
		stack2.push(stack1.top());
		stack1.pop();
	}
	if (!stack2.empty()) {
		T temp=stack2.top();
		stack2.pop();
		return temp;
	}
	else {
		throw runtime_error("Can not delete an element in an empty queue.");
	}
}
#endif
