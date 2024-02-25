#include<iostream>

using namespace std;

void isEven(int n) {

	if (n % 2 == 0) {

		cout << "even" << endl;

	} else {

		cout << "odd" << endl;

	}

	return; // optional

}

int main() {

	isEven(2);

	isEven(5);

	return 0;
}