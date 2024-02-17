#include<iostream>

using namespace std;

int main() {

	int n = 169;

	int i = 2;
	int j = 5;

	int mask1 = -1 << (j + 1);
	int mask2 = -1 << i;

	int mask = mask1 | ~mask2;

	cout << (n & mask) << endl;

	return 0;
}