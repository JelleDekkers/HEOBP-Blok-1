#include "stdafx.h"
#include <queue>
#include <thread>
#include <iostream>
#include <mutex>
#include <condition_variable>

using namespace std;

int netto = 0;
bool producerThreadIsDone = false;
queue<int> goods;
mutex _mutex;
condition_variable condition;

void producer() {
	unique_lock<mutex> lock(_mutex);

	for (int i = 0; i < 500; ++i) {
		goods.push(i);
		netto++;
		cout << "producer: " << netto << endl;
		condition.wait(lock);
	}

	lock.unlock();
	producerThreadIsDone = true;
}

void consumer() {
	while (!producerThreadIsDone) {
		while (!goods.empty()) {
			unique_lock<mutex> lock(_mutex);
			goods.pop();
			netto--;
			cout << "consumer: " << netto << endl;
			condition.notify_one();
			lock.unlock();
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