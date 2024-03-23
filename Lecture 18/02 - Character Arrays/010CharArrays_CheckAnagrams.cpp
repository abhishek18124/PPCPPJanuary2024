#include<iostream>

using namespace std;

// time : n + n + 26
// space: 26 + 26 for f1[] and f2[]

bool isAnagram(char s1[], char s2[]) {

	int f1[26] = {0};

	for (int i = 0; s1[i] != '\0'; i++) {

		char ch = s1[i];
		int idx = ch - 'a';
		f1[idx]++;

	}

	for (int i = 0; i < 26; i++) {
		cout << f1[i] << " ";
	}

	cout << endl;

	int f2[26] = {0};

	for (int i = 0; s2[i] != '\0'; i++) {

		f2[s2[i] - 'a']++;

	}

	for (int i = 0; i < 26; i++) {
		cout << f2[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 26; i++) {

		if (f1[i] != f2[i]) {

			// s1[] and s2[] are not anagrams

			return false;

		}

	}

	// s1[] and s2[] are angrams

	return true;

}

int main() {

	char s1[] = "aaabbbcc";
	char s2[] = "aaabbbcc";

	isAnagram(s1, s2) ? cout << "anagrams" << endl : cout << "not anagrams" << endl;

	return 0;
}