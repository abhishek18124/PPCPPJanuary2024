#include<iostream>

using namespace std;

int main() {

	int age;
	cin >> age;

	if (age >= 18) {
		cout << "you can vote" << endl;
	} else {
		cout <<  "you cannot vote" << endl;
	}

	cout << "you are outside the if-else block" << endl;

	return 0;
}