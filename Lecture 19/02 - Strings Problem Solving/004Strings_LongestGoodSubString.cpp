#include<iostream>
#include<string>

using namespace std;

bool isGoodString(const string& str) { // we are passing str by const ref to avoid copy which is expensive

	for (char ch : str) {

		if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {

			// ch is a consonant, therefore str[] is not a good string

			return false;

		}

	}

	// str[] is a good string

	return true;

}


// time <= n^2.n <= n^3 O(n^3)

int lengthOfLongestGoodSubstring(const string& str) {  // we are passing str by const ref to avoid copy which is expensive

	// generate all the substrings of str

	int n = str.size();
	int maxSoFar = 0; // or INT_MIN

	for (int i = 0; i < n; i++) {

		for (int j = i; j < n; j++) {

			// extract the subString that starts at the ith index and ends at the jth index

			string subString = str.substr(i, j - i + 1);
			if (isGoodString(subString)) {
				// subString is a good substring
				maxSoFar = max(maxSoFar, j - i + 1);
			}


		}

	}

	return maxSoFar;

}

int main() {

	string str = "cbaeicdeiou";

	cout << lengthOfLongestGoodSubstring(str) << endl;

	return 0;
}