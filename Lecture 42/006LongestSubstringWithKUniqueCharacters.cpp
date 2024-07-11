#include<iostream>
#include<unordered_map>

using namespace std;

int main() {

	// time : O(n)
	// space: size of freqMap (worst case n (<=26 assuming lowercase chars.) when s has only unique chars)

	string s = "aabacbebebe";
	int n = s.size();
	int k = 3;

	int i = 0; // to store the start of the window
	int j = 0; // to store the end of the windw

	int max_len = 0; // to track the length of the longest substring
	// i.e. window that contain k unique characters

	int uniqCnt = 0; // to keep track of no. of unique characters in the window

	unordered_map<char, int> freqMap; // to store a  mapping  between characters
	// present in a window & their frequencies

	while (j < n) {

		// expand the window
		freqMap[s[j]]++;
		if (freqMap[s[j]] == 1) {
			uniqCnt++;
		}

		// check for the violation of the window property
		if (uniqCnt > k) {
			// start shrinking the window
			while (uniqCnt > k) {

				freqMap[s[i]]--;
				if (freqMap[s[i]] == 0) {
					uniqCnt--;
				}
				i++;

			}
		}

		// check for the validity of the window, and update the answer
		if (uniqCnt == k) {
			// you've found a valid window
			max_len = max(max_len, j - i + 1);
		}

		// continue expansion of the window
		j++;
	}

	cout << max_len << endl;

	return 0;
}