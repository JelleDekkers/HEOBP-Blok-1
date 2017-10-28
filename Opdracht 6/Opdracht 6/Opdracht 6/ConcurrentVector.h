#pragma once
#include <vector>
#include <thread>
#include <mutex>
using namespace std;

template <typename T>
class ConcurrentVector {
public:
	ConcurrentVector();
	~ConcurrentVector();
	void add(T element);
	T getAt(int index);
	T removeAt(int index);
	int length();
	void printContents();

private:
	vector<T> list;
	mutex mutex;
};

template<typename T>
inline ConcurrentVector<T>::ConcurrentVector() {}

template<typename T>
inline ConcurrentVector<T>::~ConcurrentVector() {}

template<typename T>
inline void ConcurrentVector<T>::add(T element) {
	mutex.lock();
	list.push_back(element);
	mutex.unlock();
}

template<typename T>
inline T ConcurrentVector<T>::getAt(int index) {
	return list[index];
}

template<typename T>
inline T ConcurrentVector<T>::removeAt(int index) {
	mutex.lock();
	list.erase(list.begin(), list.begin() + index);
	mutex.unlock();
}

template<typename T>
inline int ConcurrentVector<T>::length() {
	return list.size();
}

template<typename T>
inline void ConcurrentVector<T>::printContents() {
	vector<T>::iterator i = list.begin();
	int index = 0;
	while (i != list.end()) {
		cout << index << ": " << *i << endl;
		i++;
		index++;
	}
}

