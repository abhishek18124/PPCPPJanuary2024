#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {10, 10, 20, 30, 30, 30, 40, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	// arr[] should sorted to use the following functions

	int key = 30;

	// 1. searching for a key in a sorted sequence in O(logn) using binary_search()

	binary_search(arr, arr + n, key) ? cout << key << " found in arr[]" << endl : cout << key << " not found in arr[]" << endl;

	// 2. finding lower bound for a key in a sorted sequence in O(logn) using lower_bound()

	auto lb = lower_bound(arr, arr + n, key); // returns the address of the 1st element in arr[] which is >= key

	cout << "1st occurrence of " << key << " is present at index " << lb - arr << endl;

	// 3. finding upper bound for a key in a sorted sequence in O(logn) using upper_bound()

	auto ub = upper_bound(arr, arr + n, key); // returns the address of the 1st element in arr[] > key

	cout << "last occurrence of " << key << " is present at index " << (ub - arr) - 1 << endl;

	// 4. counting the occurences of a key in a sorted sequence in O(logn)

	cout << "no. of occurrences of " << key << " in arr[] = " << ub - lb << endl;

	return 0;
}