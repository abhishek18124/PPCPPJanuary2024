#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// return true if you want a to be ordered before b in the sorted sequence

bool comparator(string a, string b) {

	int alen = a.size();
	int blen = b.size();

	if (alen < blen) {

		return true; // we want a to come before b in the sorted (inc. length-wise) sequences

	}

	return false;

}

int main() {

	string arr[] = {"xy", "abcd", "mno"};
	int n = 3;

	// sort(arr, arr + n);

	sort(arr, arr + n, comparator);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}