#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative integer : ";
	cin >> n;

	double ans = 0; // to track the square root of n

	while (ans * ans <= n) {
		ans = ans + 1;
	}

	ans = ans - 1;

	while (ans * ans <= n) {
		ans = ans + 0.1;
	}

	ans = ans - 0.1;

	while (ans * ans <= n) {
		ans = ans + 0.01;
	}

	ans = ans - 0.01;

	while (ans * ans <= n) {
		ans = ans + 0.001;
	}

	ans = ans - 0.001;

	cout << ans << endl;

	cout << sqrt(n) << endl;

	return 0;
}