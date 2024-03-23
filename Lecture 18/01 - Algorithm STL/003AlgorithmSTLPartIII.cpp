#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {50, 40, 40, 30, 30, 30, 20, 10, 10};
	int n = sizeof(arr) / sizeof(int);

	// 1. finding the minimum value in a sequence

	auto x = 10; // compiler will automatically infer that type of x is int

	auto y = 'A'; // compiler will automatically infer the type of y is char

	auto it = min_element(arr, arr + n);

	int z = 10;

	auto zptr = &z; // compiler will automatically infer type of zptr is int*

	cout << "minimum element = " << *it << endl;

	// 2. finding the maximum value in a sequence

	auto jt = max_element(arr, arr + n);

	cout << "maximum element = " << *jt << endl;

	return 0;
}
