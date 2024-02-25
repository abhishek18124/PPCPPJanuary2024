#include<iostream>

using namespace std;

int multiply(int a, int b) {

	int c = a * b;
	return c;

}

int main() {

	cout << multiply(2, 3) << endl;

	int ans = multiply(8, 7);

	cout << ans << endl;

	cout << multiply(4, 2) + 1 << endl;

	return 0;
}