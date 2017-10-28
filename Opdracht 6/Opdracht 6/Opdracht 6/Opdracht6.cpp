#include "stdafx.h"
#include <string>
#include <iostream>
#include <thread>
#include "ConcurrentVector.h"

using namespace std;

ConcurrentVector<int> list;

void addToVector() {
	for (int i = 0; i < 10; i++) {
		list.add(i);
	}
}

int main() {
	thread firstThread(addToVector);
	thread secondThread(addToVector);
	firstThread.join();
	secondThread.join();
	list.printContents();
    return 0;
}

