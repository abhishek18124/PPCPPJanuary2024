#include<iostream>
#include<climits>

using namespace std;

// time = 3n.const ~ O(n)
// space= n+n = 2n due l[] and r[] ~ O(n)

int rainwaterOptimised(int h[], int n) {

	// n steps

	int l[n];
	l[0] = h[0];
	for (int i = 1; i < n; i++) {
		l[i] = max(l[i - 1], h[i]); // const
	}

	// n steps

	int r[n];
	r[n - 1] = h[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		r[i] = max(r[i + 1], h[i]); // const
	}

	// n steps

	int total = 0;
	for (int i = 0; i < n; i++) {
		// compute the water trapped on top of the ith building
		int wi = min(l[i], r[i]) - h[i]; // const
		total += wi;
	}

	return total;

}

// time = 2n.const ~ O(n)
// space= n due to r[] ~ O(n)

int rainwaterOptimised2(int h[], int n) {

	// n steps

	int r[n];
	r[n - 1] = h[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		r[i] = max(r[i + 1], h[i]); // const
	}

	// n steps

	int total = 0;
	int maxSoFar = INT_MIN;
	for (int i = 0; i < n; i++) {
		// compute the water trapped on top of the ith building
		maxSoFar = max(maxSoFar, h[i]); // is this not equivalent to l[i]
		int wi = min(maxSoFar, r[i]) - h[i]; // const
		total += wi;
	}

	return total;

}


int main() {

	int h[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int n = sizeof(h) / sizeof(int);

	cout << rainwaterOptimised(h, n) << endl;
	cout << rainwaterOptimised2(h, n) << endl;

	return 0;
}