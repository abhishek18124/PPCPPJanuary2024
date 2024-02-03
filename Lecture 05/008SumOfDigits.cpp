#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a positive integer : ";
	cin >> n;

	int s = 0; // to track the sum of digits of 'n'

	while (n > 0) {
		int d = n % 10;
		s = s + d;
		n = n / 10;
	}

	cout << s << endl;

	return 0;
}