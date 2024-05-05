// n <= 8

#include<iostream>

using namespace std;

void f(int n, char out[], int i, int openCnt, int closeCnt) {

	// base case

	if (i == 2 * n) { // openCnt == n && closeCnt == n

		out[i] = '\0';
		cout << out << endl;
		return;

	}

	// recursive case

	// take a sequence of 2n-i decisions for positions i to 2n-1

	// decide for ith position i.e. out[i]

	// option 1 : use '('

	if (openCnt < n) {

		out[i] = '(';
		f(n, out, i + 1, openCnt + 1, closeCnt);

	}

	// option 2 : use ')'

	if (closeCnt < openCnt) {

		out[i] = ')';
		f(n, out, i + 1, openCnt, closeCnt + 1);

	}

}

int main() {


	int n = 3;

	char out[20];

	f(n, out, 0, 0, 0);

	return 0;
}