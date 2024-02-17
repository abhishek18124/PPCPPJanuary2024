#include<iostream>
#include<bitset>

using namespace std;

int main() {

	int n = 55;

	// cout << bitset<16>(55) << endl;

	int cnt = 0;
	int maxSoFar = 0;

	while (n > 0) {

		int rightMost = n & 1;
		if (rightMost == 1) {
			cnt++;
			maxSoFar = max(maxSoFar, cnt);
		} else {
			cnt = 0;
		}

		n = n >> 1;

	}

	cout << maxSoFar << endl;

	return 0;
}