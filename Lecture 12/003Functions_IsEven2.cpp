#include<iostream>

using namespace std;

bool isEven(int n) {

	return n % 2 == 0;

}

int main() {

	bool answer = isEven(2);

	if (answer == true) {
		cout << 2 << " is even" << endl;
	} else {
		cout << 2 << " is odd" << endl;
	}

	// cout << 10 + 20 << endl;

	cout << isEven(5) << endl;

	cout << isEven(4) << endl;

	if (isEven(7)) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}

	if (isEven(8)) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}

	isEven(9) ? cout << "even" << endl : cout << "odd" << endl;

	isEven(10) ? cout << "even" << endl : cout << "odd" << endl;

	return 0;
}