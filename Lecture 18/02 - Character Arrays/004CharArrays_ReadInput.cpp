// n <= 99, here n represents the length of the i/p string

#include<iostream>

using namespace std;

void readString(char str[], char delimiter = '\n') {

	int i = 0;
	char ch;

	while (true) {

		ch = cin.get();
		if (ch == delimiter) {
			break;
		}

		str[i] = ch;
		i++;

	}

	str[i] = '\0';

}

int main() {

	char str[100]; // based on the constraints

	cout << "Enter a string : ";

	// cin >> str;

	// readString(str, '$');
	// readString(str);

	// cin.getline(str, 5, '$');
	cin.getline(str, 100); // '\n' is the delmiter by default

	cout << "You've entered : " << str << endl;

	return 0;
}