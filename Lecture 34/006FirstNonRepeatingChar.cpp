#include<iostream>
#include<queue>

using namespace std;

int main() {

	char ch;
	queue<char> q;
	int freqMap[26] = {0};

	while (true) {

		cin >> ch;

		if (ch == '.') break;

		freqMap[ch - 'a']++;
		if (freqMap[ch - 'a'] == 1) {
			q.push(ch);
		}

		// find the first non-repeating char after reading ch => use queue

		while (!q.empty() and freqMap[q.front() - 'a'] > 1) {
			q.pop();
		}

		if (q.empty()) {
			cout << -1 << " ";
		} else {
			cout << q.front() << " ";
		}


	}

	return 0;
}