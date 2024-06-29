/*

	STL implementation of the min_heap data structure with custom comparator.


*/

#include<iostream>
#include<queue>

using namespace std;

class customer {
public:
	string name;
	int age;
	double credits;
	customer(string name, int age, double credits) {
		this->name = name;
		this->age = age;
		this->credits = credits;
	}
};

class ageComparator {

public:

	// return false if you want a to be ordered before b otherwise true

	// return false if you want a to be given higher priority otherwise true

	bool operator()(customer a, customer b) {

		if (a.age < b.age) {

			// we want a to be ordered before b since we are building a minHeap of customer based on their age

			return false;

		}

		return true;

	}

};

class creditsComparator {

public:

	// return false if you want a to be ordered before b otherwise true

	// return false if you want a to be given higher priority otherwise true

	bool operator()(customer a, customer b) {

		if (a.credits > b.credits) {

			// we want a to be ordered before b since we are building a maxHeap of customer based on their credits

			return false;

		}

		return true;

	}

};

int main() {

	priority_queue<customer, vector<customer>, ageComparator> m;

	m.push(customer("Ritvik", 20, 1000));
	m.push(customer("Udbhav", 22, 500));
	m.push(customer("Ayush", 21, 1250));
	m.push(customer("Anandita", 19, 750));
	m.push(customer("Kanishka", 18, 250));

	cout << m.size() << endl; // 5

	while (!m.empty()) {

		customer c = m.top();
		m.pop();

		cout << c.name << " " << c.age << " " << c.credits << endl;

	}

	cout << m.size() << endl << endl; // 0

	priority_queue<customer, vector<customer>, creditsComparator> maxHeap;

	maxHeap.push(customer("Ritvik", 20, 1000));
	maxHeap.push(customer("Udbhav", 22, 500));
	maxHeap.push(customer("Ayush", 21, 1250));
	maxHeap.push(customer("Anandita", 19, 750));
	maxHeap.push(customer("Kanishka", 18, 250));

	cout << maxHeap.size() << endl; // 5

	while (!maxHeap.empty()) {

		customer c = maxHeap.top();
		maxHeap.pop();

		cout << c.name << " " << c.age << " " << c.credits << endl;

	}

	cout << m.size() << endl; // 0

	return 0;
}