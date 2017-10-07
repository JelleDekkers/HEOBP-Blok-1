#pragma once
#include <vector>
#include <deque>
#include <iostream>
#include <typeinfo>

using namespace std;

template<typename T>
class Queue {
public:
	Queue();
	//~Queue();
	void enqueue(T element);
	T dequeue();
	T peek();
	T getLast();
	unsigned int getSize();

private:
	deque<T> deck;
};


template<class T>
inline Queue<T>::Queue() {
	cout << "Creating a queue of type " << typeid(T).name() << endl;
}


template<class T>
inline unsigned int Queue<T>::getSize() {
	return deck.size();
}

template<typename T>
inline void Queue<T>::enqueue(T element) {
	deck.push_back(element);
	cout << "adding " << element << endl;
}

template<typename T>
inline T Queue<T>::dequeue() {
	T first = deck.front();
	cout << "removing first element: " << first << endl;
	deck.pop_front();
	return first;
}

template<typename T>
inline T Queue<T>::peek() {
	return deck.front();
}

template<typename T>
inline T Queue<T>::getLast() {
	return deck.back();
}
