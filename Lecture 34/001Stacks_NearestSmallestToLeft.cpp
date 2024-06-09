#include<iostream>
#include<stack>
#include<vector>

using namespace std;

// time : O(n)
// space: O(n) due to stack

vector<int> nearestSmallerToLeft(int A[], int n) {

	stack<int> s; // index

	vector<int> ans;

	for (int i = 0; i <= n - 1; i++) {

		// find the index of the nearest smaller element to the left of A[i]

		while (!s.empty() and A[s.top()] >= A[i]) {
			s.pop();
		}

		if (s.empty()) {
			ans.push_back(-1);
		} else {
			ans.push_back(s.top());
		}

		s.push(i);

	}

	return ans;

}


int main() {

	int A[] = {0, 3, 5, 4, 1, 6, 2};
	int n = sizeof(A) / sizeof(int);

	vector<int> ans = nearestSmallerToLeft(A, n);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	cout << endl;

	return 0;
}