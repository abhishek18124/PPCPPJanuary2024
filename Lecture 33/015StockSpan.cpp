#include<iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int> stockSpan(int A[], int n) {

	stack<pair<int, int>> s; // value, index
	vector<int> ans;

	for (int i = 0; i <= n - 1; i++) {

		// find the nearest greater element to the left of A[i]

		while (!s.empty() and s.top().first <= A[i]) {
			s.pop();
		}

		int j;

		if (s.empty()) {

			// A[i] doesn't have a nearest greater element to its left

			j = -1;

		} else {

			// s.top() is the nearest greater element to the left of A[i]

			j = s.top().second;

		}

		ans.push_back(i - j);

		s.push({A[i], i}); // s.push(make_pair(A[i], i));

	}

	return ans;

}

vector<int> stockSpan2(int A[], int n) {

	stack<int> s; // index
	vector<int> ans;

	for (int i = 0; i <= n - 1; i++) {

		// find the nearest greater element to the left of A[i]

		while (!s.empty() and A[s.top()] <= A[i]) {
			s.pop();
		}

		int j;

		if (s.empty()) {

			// A[i] doesn't have a nearest greater element to its left

			j = -1;

		} else {

			// s.top() is the nearest greater element to the left of A[i]

			j = s.top();

		}

		ans.push_back(i - j);

		s.push(i);

	}

	return ans;

}



int main() {

	int A[] = {100, 80, 60, 70, 60, 75, 85};
	int n = sizeof(A) / sizeof(int);

	vector<int> ans = stockSpan2(A, n);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	cout << endl;

	return 0;
}