#include<iostream>
#include<cstring>

using namespace std;

// time : O(length of s2)

void copyString(char s1[], char s2[]) {

	int i = 0; // to iterate over s1[]
	int j = 0; // to iterate over s2[]

	while (s2[j] != '\0') {

		s1[i] = s2[j];

		i++;
		j++;

	}

	s1[i] = '\0';

}

int main() {

	char s1[100] = "abcde";
	char s2[] = "xyz";

	cout << "Before copy : " << s1 << endl;

	// copyString(s1, s2);

	strcpy(s1, s2);

	cout << "After copy : " << s1 << endl;

	return 0;
}