#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n;
	cout << "Enter a positive integer : ";
	cin >> n;

	int rn = sqrt(n); // implicity type casting
	int i = 2;

	while (i <= rn) {

		if (n % i == 0) {
			// you have found a factor 'n' in the range [2, rn]
			cout << "not prime" << endl;
			break;
		}

		i = i + 1;

	}

	if (i > rn) {
		cout << "prime" << endl;
	}

	return 0;
}