#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

// time : 2n-1 ops ~ O(n) e.g. 5 4 3 2 1
// space: O(n) due to stack e.g. 1 2 3 4 5

vector<int> nearestGreaterElementToRight(int A[], int n) {

	stack<int> s;
	vector<int> ans;

	for (int i = n - 1; i >= 0; i--) {

		// find the nearest greater element to the right of A[i]

		while (!s.empty() and s.top() <= A[i]) {
			s.pop();
		}

		if (s.empty()) {

			// A[i] doesn't have a nearest greater element to its right

			ans.push_back(-1);

		} else {

			// s.top() is the nearest greater element to the right of A[i]

			ans.push_back(s.top());

		}

		s.push(A[i]);

	}

	reverse(ans.begin(), ans.end());

	return ans;

}

int main() {

	int A[] = {5, 3, 6, 7, 2, 1, 4};
	int n = sizeof(A) / sizeof(int);

	vector<int> ans = nearestGreaterElementToRight(A, n);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	cout << endl;

	return 0;
}