#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative integer : ";
	cin >> n;

	int p;
	cin >> p;

	double ans = 0; // to track the square root of n

	while (ans * ans <= n) {
		ans = ans + 1;
	}

	ans = ans - 1;

	int i = 1;
	double incFactor = 0.1;

	while (i <= p) {

		while (ans * ans <= n) {
			ans = ans + incFactor;
		}

		ans = ans - incFactor;
		incFactor = incFactor / 10;
		i =  i + 1;
	}

	cout << ans << endl;

	// cout << sqrt(n) << endl;

	return 0;
}