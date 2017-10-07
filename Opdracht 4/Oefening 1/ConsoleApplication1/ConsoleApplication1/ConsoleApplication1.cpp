#include "stdafx.h"
#include "Queue.h"
#include <string>
#include <iostream>
using namespace std;



template <typename T, size_t SIZE> void orderBySmallest(T(&array)[SIZE]);
template <typename T, size_t SIZE> void orderByLargest(T(&array)[SIZE]);

int main() {
	string stringArray[] = { "abcd", "abcde", "abc", "a", "ab" };
	float floatArray[] = { 4.5f, 5.2f, 3.3f, 5.6f, 1.58f };

	//orderBySmallest(stringArray);
	//orderByLargest(stringArray);
	//orderBySmallest(floatArray);
	//orderByLargest(floatArray);

	Queue<int> queue;
	queue.enqueue(4);
	queue.enqueue(5);
	queue.enqueue(6);
	cout << "queue size: " << queue.getSize() << endl;
	cout << "first element: " << queue.peek() << endl;
	cout << "last element: " << queue.getLast() << endl;
	queue.dequeue();
	queue.enqueue(9);
	cout << "queue size: " << queue.getSize() << endl;
	cout << "first element: " << queue.peek() << endl;
	cout << "last element: " << queue.getLast() << endl;

    return 0;
}

template <typename T, size_t SIZE>
void orderBySmallest(T(&params)[SIZE]) {
	cout << "before sorting:" << endl;
	for (unsigned int i = 0; i < SIZE; i++)
		cout << params[i] << endl;

	for (unsigned int i = 1; i < SIZE; i++) {
		if (params[i] >= params[i - 1])
			continue;

		for (unsigned int j = 0; j < i;  j++) {
			if (params[i] < params[j]) {
				T temp = params[i];
				params[i] = params[j];
				params[j] = temp;
			}
		}
	}

	cout << "after sorting:" << endl;
	for (unsigned int i = 0; i < SIZE; i++)
		cout << params[i] << endl;
}

template <typename T, size_t SIZE>
void orderByLargest(T(&params)[SIZE]) {
	cout << "before sorting:" << endl;
	for (unsigned int i = 0; i < SIZE; i++)
		cout << params[i] << endl;

	for (unsigned int i = 1; i < SIZE; i++) {
		if (params[i] <= params[i - 1])
			continue;

		for (unsigned int j = 0; j < i; j++) {
			if (params[i] > params[j]) {
				T temp = params[i];
				params[i] = params[j];
				params[j] = temp;
			}
		}
	}

	cout << "after sorting:" << endl;
	for (unsigned int i = 0; i < SIZE; i++)
		cout << params[i] << endl;
}





