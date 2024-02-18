#include<iostream>
#include<cstring> // for memset

using namespace std;

int main() {

	int A[5] = {10, 20, 30, 40, 50};

	// cout << "A[0] = " << A[0] << endl;
	// cout << "A[1] = " << A[1] << endl;
	// cout << "A[2] = " << A[2] << endl;
	// cout << "A[3] = " << A[3] << endl;
	// cout << "A[4] = " << A[4] << endl;

	int n = sizeof(A) / sizeof(int);

	for (int i = 0; i < n; i++) {
		cout << A[i] << endl;
	}

	cout << endl;

	for (int i = 0; i <= n - 1; i++) {
		cout << A[i] << endl;
	}

	int B[] = {100, 200, 300, 400, 500, 600, 700};

	// int m = sizeof(B) / sizeof(int);

	int m = sizeof(B) / sizeof(B[0]);

	for (int i = 0; i < m; i++) {
		cout << B[i] << " ";
	}

	cout << endl;

	int C[5] = {10, 20, 30};

	for (int i = 0; i < 5; i++) {
		cout << C[i] << " ";
	}

	cout << endl;

	int D[10];

	// int E[]; // error

	int F[10] = {0};

	for (int i = 0; i < 10; i++) {
		cout << F[i] << " ";
	}

	cout << endl;

	int G[10] = {};

	for (int i = 0; i < 10; i++) {
		cout << G[i] << " ";
	}

	cout << endl;

	int H[] = {};

	cout << sizeof(H) << "B" << endl;

	int I[10]; // declaration

	memset(I, 0, sizeof(I));

	for (int i = 0; i < 10; i++) {
		cout << I[i] << " ";
	}

	cout << endl;

	return 0;
}