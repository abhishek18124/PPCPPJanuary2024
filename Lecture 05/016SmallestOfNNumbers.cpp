#include<iostream>
#include<climits>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int ssf = INT_MAX; // to track the "smallest so far"

	int i = 1;
	while (i <= n) {
		int x;
		cin >> x;
		if (x < ssf) {
			ssf = x;
		}
		i = i + 1;
	}

	cout << ssf << endl;

	return 0;
}