#include <iostream>
#include "CQueue.h"
using namespace std;

int main() {
	CQueue<int> list;
	list.appendTail(1);
	cout<<list.deleteHead()<<endl;
	list.appendTail(2);
	list.appendTail(3);
	cout<<list.deleteHead()<<endl;

	list.appendTail(4);
	cout<<list.deleteHead()<<endl;
	cout<<list.deleteHead()<<endl;

	cout<<"Now the queue is empty."<<endl;
	
	cout<<list.deleteHead()<<endl;

	return 0;
}
