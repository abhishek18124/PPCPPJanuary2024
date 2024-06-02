#include<iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int> nearestGreaterElementToLeft(int A[], int n) {

	stack<int> s;
	vector<int> ans;

	for (int i = 0; i <= n - 1; i++) {

		// find the nearest greater element to the left of A[i]

		while (!s.empty() and s.top() <= A[i]) {
			s.pop();
		}

		if (s.empty()) {

			// A[i] doesn't have a nearest greater element to its left

			ans.push_back(-1);

		} else {

			// s.top() is the nearest greater element to the left of A[i]

			ans.push_back(s.top());

		}

		s.push(A[i]);

	}

	return ans;

}

int main() {

	int A[] = {5, 2, 0, 4, 1, 3, 6};
	int n = sizeof(A) / sizeof(int);

	vector<int> ans = nearestGreaterElementToLeft(A, n);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	cout << endl;

	return 0;
}