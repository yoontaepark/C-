//Stack & Queue
//Stack: LIFO, Queue: FIFO

//Stack Code ����
#include <iostream>
#include <list>
using namespace std;

template<class T>
class Stack {
	list<T> data;
public:
	void push(T newItem) { data.push_front(newItem); }
	T pop() { return data.pop_front(); }
	T top() const { return *data.begin(); }
	bool isEmpty() const { return data.size() == 0; }
	int size() const { return data.size(0); }
	void clear() { data.clear(); }
};

template<class Q>
class Queue {
	list<Q> data;
public:
	void push(Q newItem) { data.push_back(newItem); } //�̰Ÿ� front�� �ƴ϶� back�� (FIFO)
	Q pop() { return data.pop_front(); }
	Q top() const { return *data.begin(); }
	bool isEmpty() const { return data.size() == 0; }
	int size() const { return data.size(0); }
	void clear() { data.clear(); }
};



