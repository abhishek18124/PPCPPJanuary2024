#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

// time : O(n)
// space: O(n) due to us

int longestLength(string str) {

	unordered_set<char> us;
	int cnt = 0;

	for (char ch : str) {

		if (us.find(ch) == us.end()) {

			// ch is not present in us

			us.insert(ch);

		} else {

			// ch is present in the us

			cnt += 2;
			us.erase(ch);

		}

	}

	if (us.size() > 0) {
		cnt++;
	}

	return cnt;

}

int main() {

	string str = "aaabbbbb";

	cout << longestLength(str) << endl;

	return 0;
}