#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n) {

	int rn = sqrt(n);
	for (int i = 2; i <= rn; i++) {
		if (n % i == 0) {
			// you've found a factor 'n' in the range [2, rn]
			return false;
		}
	}

	return true;

}

// advantages of using functions

// 1. reusability
// 2. readability
// 3. modularity

void printPrimes(int m) {

	for (int n = 2; n <= m; n++) {

		// check if n is a prime no. or not

		if (isPrime(n)) {

			// n is a prime no.

			cout << n << " ";

		}

	}

}

int main() {

	int m;
	cout << "Enter the value of m : ";
	cin >> m;

	printPrimes(m);

	return 0;
}