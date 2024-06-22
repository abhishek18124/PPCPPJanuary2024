/*

	Given a binary tree, design an algorithm to check if is a BST or not.

*/

#include<iostream>
#include<climits>

using namespace std;

class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = this->right = NULL;
	}
};

int findMinimum(TreeNode* root) {

	if (root == NULL) {
		return INT_MAX;
	}

	while (root->left != NULL) {
		root = root->left;
	}

	return root->val;

}

int findMaximum(TreeNode* root) {

	if (root == NULL) {
		return INT_MIN;
	}

	while (root->right != NULL) {
		root = root->right;
	}

	return root->val;

}


bool isBST(TreeNode* root) {

	// base case

	if (root == NULL) {

		// assume empty tree is a BST

		return true;

	}

	// recursive case

	// 1. check if the leftSubtree is a BST

	bool leftIsBst = isBST(root->left);

	// 2. check if the rightSubtree is a BST

	bool rightIsBst = isBST(root->right);

	// 3. check if the BST prop. is satisfied at the root

	bool rootIsBst = root->val > findMaximum(root->left) and root->val < findMinimum(root->right) ? true : false;

	return leftIsBst and rightIsBst and rootIsBst;

}

class triple {

public:

	bool isbst;
	int minVal;
	int maxVal;

};

// time : O(n)

triple isBSTEfficient(TreeNode* root) {

	triple t;

	// base case

	if (root == NULL) {

		// assume empty tree is a BST

		t.isbst = true;
		t.minVal = INT_MAX;
		t.maxVal = INT_MIN;

		return t;

	}

	// recursive case

	// 1. check if the leftSubtree is a BST and also find its minVal and maxVal

	triple left = isBSTEfficient(root->left);

	// 2. check if the rightSubtree is a BST and also find its minVal and maxVal

	triple right = isBSTEfficient(root->right);

	// 3. check if the BST prop. is satisfied at the root

	bool rootIsBst = root->val > left.maxVal and root->val < right.minVal ? true : false;

	t.isbst = left.isbst and right.isbst and rootIsBst;
	t.minVal = min(left.minVal, min(right.minVal, root->val));
	t.maxVal = max(left.maxVal, max(right.maxVal, root->val));

	return t;

}

bool isBSTRange(TreeNode* root, long long lb, long long ub) {

	// base case

	if (root == NULL) {
		return true;
	}

	// recursive case

	return root->val > lb and root->val < ub and
	       isBSTRange(root->left, lb, root->val) and
	       isBSTRange(root->right, root->val, ub);

}

int main() {

	TreeNode* root = new TreeNode(10);

	root->left = new TreeNode(5);
	root->left->left  = new TreeNode(3);
	root->left->right = new TreeNode(7);

	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(17);

	isBST(root) ? cout << "BST" << endl : cout << "not BST" << endl;

	triple t = isBSTEfficient(root);

	t.isbst ? cout << "BST" << endl : cout << "not BST" << endl;

	long long lb = (long long)INT_MIN - 1; // LLONG_MIN
	long long ub = (long long)INT_MAX + 1; // LLONG_MAX

	isBSTRange(root, lb, ub) ? cout << "BST" << endl : cout << "not BST" << endl;

	return 0;
}