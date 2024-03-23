#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {50, 40, 40, 30, 30, 30, 20, 10, 10};
	int n = sizeof(arr) / sizeof(int);

	int key = 100;

	// 1. searching for a key in a sequence using find()

	auto it = find(arr, arr + n, key);

	if (it == arr + n) {

		cout << key << " not found in arr[]" << endl;

	} else {

		cout << key << " is present in arr[] at index = " << it - arr << endl;

	}

	// 2. counting the occurrences of a key in a sequence using count()

	int cnt = count(arr, arr + n, key);

	cout << key << " is present in the arr[] " << cnt << " times" << endl;

	return 0;
}
