#include<iostream>
#include<string>

using namespace std;

// time : n.c ~ O(n)

// homework : print the longest good substring along with its length

int lengthOfLongestGoodSubstring(string str) {

	int maxSoFar = 0;
	int cnt = 0;

	for (char ch : str) {

		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {

			// ch is a vowel

			cnt++;
			maxSoFar = max(maxSoFar, cnt);

		} else {

			// ch is consonant

			cnt = 0;

		}

	}

	return maxSoFar;

}

int main() {

	string str = "cbaeicdeiou";

	cout << lengthOfLongestGoodSubstring(str) << endl;

	return 0;
}