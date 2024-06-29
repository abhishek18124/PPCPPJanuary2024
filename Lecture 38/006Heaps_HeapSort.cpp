/*

	Given an array of n integers, sort the array using heap sort algorithm.

*/

#include<iostream>
#include<vector>

using namespace std;

void heapify(vector<int>& v, int n, int i) {

	// fix the heap property at the ith index

	int maxIdx = i;
	int leftIdx = 2 * i + 1;
	if (leftIdx < n and v[leftIdx] > v[maxIdx]) {
		maxIdx = leftIdx;
	}

	int rightIdx = 2 * i + 2;
	if (rightIdx < n and v[rightIdx] > v[maxIdx]) {
		maxIdx = rightIdx;
	}

	if (maxIdx != i) {
		swap(v[maxIdx], v[i]);
		heapify(v, n, maxIdx);
	}

}


// total time = n + nlogn ~ O(nlogn)
// space = O(logn) due function call-stack of heapify

// hw = implement heapify iteratively to make space complexity of heap sort as O(1)

int main() {

	vector<int> v = {1, 3, 2, 7, 5, 4, 6, 9, 8};

	// 1. transform v[] into a maxHeap // n-steps

	int n = v.size();

	for (int i = n - 1; i >= 0; i--) {
		heapify(v, n, i);
	}

	// 2. transform maxHeap into a sorted v[] - nlogn

	int heapsize = n;

	while (heapsize >= 1) { // n-1 times

		swap(v[0], v[heapsize - 1]); // const
		heapsize--; // const
		heapify(v, heapsize, 0); // logn

	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}
