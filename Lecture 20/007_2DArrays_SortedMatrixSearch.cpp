#include<iostream>
#include<algorithm>

using namespace std;

// time : mlogn

bool isPresent(int mat[][3], int m, int n, int t) {

	for (int i = 0; i < m; i++) {

		// search for the 't' in the ith row using binary_search

		if (binary_search(mat[i], mat[i + 1], t)) { // start = mat[i], end = mat[i+1] or mat[i] + n

			// you've found the 't' in the ith row

			return true;

		}

	}

	// 't' is not present in mat[][]
	return false;

}

int main() {

	int mat[][3] = {
		{40, 50, 60},
		{10, 20, 30},
		{70, 80, 90}
	};

	int m = 3;
	int n = 3;

	int t = 110;

	isPresent(mat, m, n, t) ? cout << t << " found" <<  endl : cout << t << " not found" << endl;

	return 0;
}