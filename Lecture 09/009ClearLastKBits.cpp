#include<iostream>

using namespace std;

int main() {

	int n = 169;
	int k = 4;

	// int mask = ~0 << k;
	int mask = -1 << k;

	cout << (n & mask) << endl;

	return 0;
}