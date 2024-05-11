/*

Suppose there is a ladder with n steps. A person standing at the bottom of the ladder and wants to
reach to its top. Assume the person can take atmost k steps at a time. Then, count the number
of ways, the person can reach the top of the ladder.

Example
	Input : n = 4, k = 3
	Output: 7
	Explanation : [1, 1, 1, 1],
	              [1, 1, 2],
	              [1, 2, 1],
	              [2, 1, 1],
	              [2, 2],
	              [1, 3],
	              [3, 1]

*/
#include<iostream>
#include<vector>

using namespace std;

vector<int> path;

int f(int n, int k, int i) {

	// base case

	if (i == n) {

		for (int i = 0; i < path.size(); i++) {
			cout << path[i] << " ";
		}
		cout << endl;
		return 1;

	}

	// recursive case

	// decide the next jump

	int cnt = 0;

	for (int j = 1; j <= k; j++) {

		if (i + j <= n) {

			// take a jump of size j

			path.push_back(j);
			cnt += f(n, k, i + j);
			path.pop_back(); // backtracking

		}

	}

	return cnt;

}



int f2(int n, int k, int i) {

	// base case

	if (i == n) {

		for (int i = 0; i < path.size(); i++) {
			cout << path[i] << " ";
		}
		cout << endl;
		return 1;

	}

	if (i > n) {

		return 0;

	}

	// recursive case

	// decide the next jump

	int cnt = 0;

	for (int j = 1; j <= k; j++) {

		// take a jump of size j

		path.push_back(j);
		cnt += f2(n, k, i + j);
		path.pop_back(); // backtracking


	}

	return cnt;

}

int main() {

	int n = 4;
	int k = 3;

	cout << f2(n, k, 0) << endl;

	return 0;
}