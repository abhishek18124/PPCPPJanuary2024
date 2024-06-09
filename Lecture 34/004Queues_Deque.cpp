#include<iostream>
#include<deque>

using namespace std;

template <typename T>
class queue {

	deque<T> d;

public:

	void push(T val) {
		d.push_back(val);
	}

	void pop() {
		d.pop_front();
	}

	T front() {
		return d.front();
	}

	int size() {
		return d.size();
	}

	bool empty() {
		return d.empty();
	}

};

int main() {

	queue<int> q;

	cout << "size : " << q.size() << endl;
	cout << "empty : " << q.empty() << endl;

	q.push(10);
	q.push(20);
	q.push(30);

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();
	q.empty() ? cout << "Queue is empty!" << endl :
	                 cout << "Queue is not empty!" << endl;

	return 0;
}