// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

string stringArray[] = { "abcd", "abcde", "abc", "a", "ab" };
float floatArray[] = { 4.5, 5.2, 3.3, 5.6, 1.58 };

template <typename T, size_t SIZE> void orderBySmallest(T(&array)[SIZE]);
template <typename T, size_t SIZE> void orderByLargest(T(&array)[SIZE]);

int main() {
	//orderBySmallest(stringArray);
	orderByLargest(stringArray);

	orderBySmallest(floatArray);
	//orderByLargest(floatArray);

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





