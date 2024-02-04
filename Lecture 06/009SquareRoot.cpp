#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative integer : ";
	cin >> n;

	int ans = 0; // to track the square root of n

	while (ans * ans <= n) {
		ans = ans + 1;
	}

	ans = ans - 1;

	cout << ans << endl;

	return 0;
}