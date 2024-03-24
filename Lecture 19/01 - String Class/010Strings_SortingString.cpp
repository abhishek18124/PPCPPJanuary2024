#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// return true if you want a to be ordered before b

bool comparator(char a, char b) {

	if (a > b) {

		return true; // since we are sorting in decreasing and want a to come before b

	}

	return false;

}

int main() {

	string s = "axbzyc";

	sort(s.begin(), s.end()); // sorts s in increasing order

	cout << s << endl;

	// sort(s.rbegin(), s.rend()); // sorts s in decreasing order
	// sort(s.begin(), s.end(), greater<char>());
	sort(s.begin(), s.end(), comparator);

	cout << s << endl;

	return 0;
}