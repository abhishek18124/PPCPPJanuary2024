/*

	Implementation of the heap/priority_queue data structure.

*/

#include<iostream>
#include<vector>

using namespace std;

class maxHeap {

	vector<int> v;

	void heapify(int i) {

		// fix the heap property at the ith index

		int maxIdx = i;
		int leftIdx = 2 * i + 1;
		if (leftIdx < v.size() and v[leftIdx] > v[maxIdx]) {
			maxIdx = leftIdx;
		}

		int rightIdx = 2 * i + 2;
		if (rightIdx < v.size() and v[rightIdx] > v[maxIdx]) {
			maxIdx = rightIdx;
		}

		if (maxIdx != i) {
			swap(v[maxIdx], v[i]);
			heapify(maxIdx);
		}

	}

public:

	// time : O(logn)

	void push(int val) {

		v.push_back(val);

		int childIdx = v.size() - 1;
		int parentIdx = childIdx % 2 == 0 ? childIdx / 2 - 1 : childIdx / 2;

		while (parentIdx >= 0 and v[childIdx] > v[parentIdx]) {

			swap(v[childIdx], v[parentIdx]);
			childIdx = parentIdx;
			parentIdx = childIdx % 2 == 0 ? childIdx / 2 - 1 : childIdx / 2;

		}

	}

	// time : O(logn)

	void pop() {
		swap(v[0], v[v.size() - 1]); // const
		v.pop_back(); // const
		heapify(0); // logn
	}

	// time : O(1)

	int top() {
		return v[0];
	}

	// time : O(1)

	bool empty() {
		return v.empty();
	}

	// time : O(1)

	int size() {
		return v.size();
	}

};

int main() {

	maxHeap m;

	m.push(9);
	m.push(7);
	m.push(8);
	m.push(5);
	m.push(4);
	m.push(6);
	m.push(3);
	m.push(2);
	m.push(1);

	cout << m.size() << endl; // 9

	while (!m.empty()) {
		cout << m.top() << " ";
		m.pop();
	}

	cout << endl;

	cout << m.size() << endl; // 0

	return 0;
}



