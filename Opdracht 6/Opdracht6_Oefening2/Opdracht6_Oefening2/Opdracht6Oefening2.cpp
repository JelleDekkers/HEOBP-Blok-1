#include "stdafx.h"
#include <queue>
#include <thread>
#include <iostream>
#include <mutex>

using namespace std;

int netto = 0;
bool producerThreadIsDone = false;
queue<int> goods;
mutex _mutex;

void producer() {
	for (int i = 0; i < 500; ++i) {
		_mutex.lock();
		goods.push(i);
		netto++;
		cout << "producer: " << netto << endl;
		_mutex.unlock();
	}

	producerThreadIsDone = true;
}

void consumer() {
	while (!producerThreadIsDone) {
		while (!goods.empty()) {
			_mutex.lock();
			goods.pop();
			netto--;
			cout << "consumer: " << netto << endl;
			_mutex.unlock();
		}
	}
}

int main() {
	thread producerThread(producer);
	thread consumerThread(consumer);

	producerThread.join();
	consumerThread.join();

	std::cout << "Net: " << netto << std::endl;
}