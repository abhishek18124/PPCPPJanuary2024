#include<iostream>
#include<cstring>

using namespace std;

// len(s1) = m, len(s2) = n

// time = min(m, n)

int compareString(char s1[], char s2[]) {

	int i = 0; // to iterate over s1[]
	int j = 0; // to iterate over s2[]

	while (s1[i] != '\0' and s2[j] != '\0') {

		if (s1[i] > s2[j]) {

			// s1 > s2

			return 1;

		} else if (s1[i] < s2[j]) {

			// s1 < s2

			return -1;

		} else {

			// s1[i] is equal to s2[j]

			i++;
			j++;

		}

	}

	if (s1[i] == '\0' and s2[j] == '\0') {

		// s1 is equal to s2

		return 0;

	} else if (s1[i] != '\0') { // s2[j] == '\0'

		// len(s1) > len(s2)

		// s1 > s2

		return 1;

	}

	// s2[j] != '\0' => len(s2) > len(s1) => s1 < s2

	return -1;

}

int main() {

	char s1[] = "aaz";
	char s2[] = "abz";

	// int res = compareString(s1, s2);
	int res = strcmp(s1, s2);

	if (res == 0) {

		cout << s1 << " is equal to " << s2 << endl;

	} else if (res > 0) { // res == 1

		cout << s1 << " > " << s2 << endl;

	} else {

		// res < 0 || res == -1

		cout << s1 << " < " << s2 << endl;

	}

	return 0;
}