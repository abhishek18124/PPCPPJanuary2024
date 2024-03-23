#include<iostream>
#include<cstring>

using namespace std;

// time : n/2 ~ O(n)
// space: O(1)

bool isPalindrome(char str[]) {

	int n = strlen(str);

	int i = 0;
	int j = n - 1;

	while (i < j) {

		if (str[i] != str[j]) {

			// str[] is not a palindrome

			return false;

		}

		i++;
		j--;

	}

	// str[] is a palindrome

	return true;

}

int main() {

	char str[] = "abcddcba";

	isPalindrome(str) ? cout << "palindrome" << endl : cout << "not a palindrome" << endl;

	return 0;
}