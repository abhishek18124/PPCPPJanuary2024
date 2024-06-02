#include<iostream>
#include<vector>

using namespace std;

template <typename T>
class stack {

	vector<T> v;

public :

	void push(T val) {
		v.push_back(val);
	}

	void pop() {
		if (empty()) {
			return;
		}
		v.pop_back();
	}

	int size() {
		return v.size();
	}

	T top() {
		return v.back(); // v[v.size()-1]
	}

	bool empty() {
		return v.empty(); // v.size() == 0
	}

};

int main() {

	stack<int> s;

	cout << "size : " << s.size() << endl; // 0
	cout << "isEmpty ? " << s.empty() << endl; // true

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout << "size : " << s.size() << endl; // 5
	cout << "top : " << s.top() << endl; // 50
	cout << "isEmpty ? " << s.empty() << endl; // false

	s.pop();

	cout << "size : " << s.size() << endl; // 4
	cout << "top : " << s.top() << endl; // 40

	s.pop();

	cout << "size : " << s.size() << endl; // 3
	cout << "top : " << s.top() << endl; // 30

	s.pop();

	cout << "size : " << s.size() << endl; // 2
	cout << "top : " << s.top() << endl; // 20

	s.pop();

	cout << "size : " << s.size() << endl; // 1
	cout << "top : " << s.top() << endl; // 10

	s.pop();

	cout << "size : " << s.size() << endl; // 0
	cout << "isEmpty ? " << s.empty() << endl; // true

	return 0;
}