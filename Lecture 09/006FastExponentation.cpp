#include<iostream>

using namespace std;

int main() {

	int a = 3;
	int n = 5;

	int ans = 1;
	int wgt = a;

	while (n > 0) {

		int rightmostbit = n & 1;
		if (rightmostbit == 1) {
			ans = ans * wgt;
		}

		n = n >> 1;
		wgt = wgt * wgt;

	}

	cout << ans << endl;

	return 0;
}