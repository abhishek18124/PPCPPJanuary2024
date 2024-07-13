/*

Given an array of non-negative integers, find the maximum subarray XOR.

Example:
	Input : x[] = {25, 10, 2, 8, 5, 3}
	Output:

*/

#include<iostream>
#include<climits>
#include<vector>

using namespace std;

class node {
public:

	node* left;  // indicates if node has a child that represents bit 0
	node* right; // indicates if node has a child that represents bit 1

	node() {
		this->left = NULL;
		this->right = NULL;
	}
};

class trie {

	node* root;

public:

	trie() {
		root = new node();
	}

	void insert(int n) {
		node* temp = root;
		for (int i = 31; i >= 0; i--) {
			int bit = (1 << i)&n;
			if (!bit) {
				// ith bit of n is 0, check if temp node has a left child or not
				if (!temp->left) {
					node* n = new node();
					temp->left = n;
				}
				temp = temp->left;
			} else {
				// ith bit of n is 1, check if temp node has a right child or not
				if (!temp->right) {
					node* n = new node();
					temp->right = n;
				}
				temp = temp->right;
			}
		}
	}

	int helper(int n) { // 32-steps

		// use a trie to find the maximum possible xor involving n in just a single xor operation

		int ans = 0;
		node* cur = root;

		for (int i = 31; i >= 0; i--) {

			int ithBit = (n >> i) & 1;

			if (ithBit == 0) {

				if (cur->right != NULL) {
					// ithBit of ans can be set
					ans += (1 << i);
					cur = cur->right;
				} else {
					cur = cur->left;
				}

			} else {
				// ithBit == 1
				if (cur->left != NULL) {
					// ithBit of ans can be set
					ans += (1 << i);
					cur = cur->left;
				} else {
					cur = cur->right;
				}
			}

		}

		cout << n << " ^ " << (n ^ ans) << " = " << ans << endl;

		return ans;

	}

	int maximumXOR(vector<int> x, int n) {
		int maxSoFar = 0;
		for (int i = 0; i < n; i++) { // n.32 steps
			maxSoFar = max(maxSoFar, helper(x[i]));
		}
		return maxSoFar;
	}
};


int foptimisedUsingCXOR(int arr[], int n) {

	vector<int> cxor(n + 1);
	cxor[0] = 0;

	for (int i = 1; i <= n; i++) {
		cxor[i] = cxor[i - 1] ^ arr[i - 1];
	}

	int maxXOR = 0; // to track the maximum subarray XOR

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			// compute the xor of arr[i...j]
			int XOR = cxor[j + 1] ^ cxor[i];
			maxXOR = max(maxXOR, XOR);
		}
	}

	return maxXOR;

}

// total time = n + n.32 + n.32 ~ O(n)
// total space = n+1 for cxor[] + n.32 for trie ~ O(n)

int foptimisedUsingTrie(int arr[], int n) {

	vector<int> cxor(n + 1);
	cxor[0] = 0;

	for (int i = 1; i <= n; i++) { // n
		cxor[i] = cxor[i - 1] ^ arr[i - 1];
	}

	trie t;
	for (int i = 0; i <= n; i++) { // n.32
		t.insert(cxor[i]);
	}

	return t.maximumXOR(cxor, n + 1); // n.32

}


int main() {

	int arr[] = {25, 10, 2, 8, 5, 3};
	int n = sizeof(arr) / sizeof(int);

	// brute-force approach - time : O(n^3) space : O(1)

	int maxXOR = 0; // to track the maximum subarray XOR

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			// compute the xor of arr[i...j]
			int XOR = 0;
			for (int k = i; k <= j; k++) {
				XOR ^= arr[k];
			}
			maxXOR = max(maxXOR, XOR);
		}
	}

	cout << maxXOR << endl;

	// 2nd approach - uses cxor[]

	cout << foptimisedUsingCXOR(arr, n) << endl;

	cout << foptimisedUsingTrie(arr, n) << endl;

	return 0;
}