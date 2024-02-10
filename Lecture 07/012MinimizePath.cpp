#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int x = 0; // to track the net movement along the x-axis
	int y = 0; // to track the net movement along the y-axis

	char ch;

	while (true) {

		ch = cin.get();
		if (ch == '\n') {
			break;
		}

		if (ch == 'N') {
			y++;
		} else if (ch == 'S') {
			y--;
		} else if (ch == 'E') {
			x++;
		} else { // ch == 'W'
			x--;
		}

	}

	cout << "(" << x << ", " << y << ")" << endl;

	if (x > 0) {

		// print 'E' x times

		for (int i = 1; i <= x; i++) {
			cout << 'E';
		}

	}

	if (y > 0) {

		// print 'N' y times

		for (int i = 1; i <= y; i++) {
			cout << 'N';
		}

	}

	if (y < 0) {

		// print 'S' -y times

		for (int i = 1; i <= abs(y); i++) { // abs() is part of cmath
			cout << 'S';
		}

	}

	if (x < 0) {

		// print 'W' -x times

		for (int i = 1; i <= -x; i++) {
			cout << 'W';
		}

	}

	return 0;
}