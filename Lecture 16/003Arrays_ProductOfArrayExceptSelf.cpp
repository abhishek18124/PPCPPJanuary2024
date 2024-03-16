// contraints : n <= 100

#include<iostream>

using namespace std;

// time : O(n^2) <= (10^5)^2 <= 10^10 steps > 10^8 (1s) => TLE

void productExceptSelf(int nums[], int n) {

	int answer[100]; // based on the constraints

	for (int i = 0; i < n; i++) {

		// li = prodt(0 to i-1)

		int li = 1;

		for (int j = 0; j <= i - 1; j++) {
			li = li * nums[j];
		}

		// ri = prodt(i+1 to n-1)

		int ri = 1;

		for (int j = i + 1; j <= n - 1; j++) {
			ri = ri * nums[j];
		}

		answer[i] = li * ri;

	}

	for (int i = 0; i < n; i++) {
		cout << answer[i] << " ";
	}

	cout << endl;

}

// time : n + n + n = 3n ~ O(n)
// space: n + n = 2n due to l[] and r[] ~ O(n)

void productExceptSelfOptimised(int nums[], int n) {

	int l[n];
	l[0] = 1;
	for (int i = 1; i < n; i++) {
		l[i] = l[i - 1] * nums[i - 1];
	}

	int r[n];
	r[n - 1] = 1;
	for (int i = n - 2; i >= 0; i--) {
		r[i] = r[i + 1] * nums[i + 1];
	}

	int answer[n];
	for (int i = 0; i < n; i++) {
		answer[i] = l[i] * r[i];
	}

	for (int i = 0; i < n; i++) {
		cout << answer[i] << " ";
	}

	cout << endl;

}

int main() {

	int nums[] = {1, 2, 3, 4, 5};
	int n = sizeof(nums) / sizeof(int);

	productExceptSelf(nums, n);

	productExceptSelfOptimised(nums, n);

	return 0;
}