#include<iostream>
#include<string>

using namespace std;

// class - type
// object - variable

int main() {

	string str = "coding";

	cout << "str[0] = " << str[0] << endl;
	cout << "str[1] = " << str[1] << endl;
	cout << "str[2] = " << str[2] << endl;
	cout << "str[3] = " << str[3] << endl;
	cout << "str[4] = " << str[4] << endl;
	cout << "str[5] = " << str[5] << endl << endl;

	int n = str.size(); // str.length()

	cout << "str.size() = " << n << endl << endl;

	for (int i = 0; i < n; i++) {
		cout << "str[" << i << "] = " << str[i] << endl;
	}

	cout << endl << endl;

	for (int i = 0; str[i] != '\0'; i++) {
		cout << "str[" << i << "] = " << str[i] << endl;
	}

	cout << endl;

	return 0;
}