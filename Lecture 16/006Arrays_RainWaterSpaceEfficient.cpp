#include<iostream>
#include<climits>

using namespace std;

// time : O(n)
// space: O(1)

int rainwaterOptimisedUsingTwoPointer(int h[], int n) {

	int i = 0;
	int j = n - 1;

	int total = 0;

	int l = INT_MIN; // or h[0]   max(0 to i)
	int r = INT_MIN; // or h[n-1] max(j to n-1)

	while (i <= j) {

		l = max(l, h[i]); // max(0 to i)
		r = max(r, h[j]); // max(j to n-1)

		if (l < r) {

			// compute the water trapped on top of the ith building

			int wi = l - h[i];
			total += wi;
			i++;

		} else {

			// compute the water trapped on top of the jth building

			int wj = r - h[j];
			total += wj;
			j--;

		}

	}

	return total;

}

int main() {

	int h[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int n = sizeof(h) / sizeof(int);

	cout << rainwaterOptimisedUsingTwoPointer(h, n) << endl;

	return 0;
}