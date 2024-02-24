#include<iostream>

using namespace std;

int main() {

	cout << max(2, 5) << endl;
	cout << min(3, 0) << endl;

	cout << max({2, 5, 7}) << endl;
	cout << max(2, max(5, 7)) << endl;

	cout << min({2, 3, 0}) << endl;
	cout << min(2, min(3, 0)) << endl;

	cout << max({1, 2, 3, 4}) << endl;
	cout << max(1, max(2, max(3, 4))) << endl;

	return 0;
}