#include<iostream>

using namespace std;

int main() {

	int n = 7;
	int m = 15;

	int ans = n ^ m;

	int cnt = 0; // to store the hamming distance

	while (ans > 0) {

		// clear the rightmost bit of 'ans'
		ans = ans & (ans - 1);
		cnt++;

	}

	cout << cnt << endl;

	return 0;
}