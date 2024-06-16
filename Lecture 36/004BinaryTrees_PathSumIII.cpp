#include<iostream>
#include<vector>

using namespace std;

class TreeNode {

public :

	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = NULL;
		this->right = NULL;
	}

};


int countPaths(TreeNode* root, long long targetSum) {

	// base case

	if (root == NULL) {

		return 0;

	}

	// recursive case

	// count the no. of paths in the given tree starting from root whose sum is equal to targetSum

	int cnt = 0;

	if (root->val == targetSum) {
		cnt++;
	}

	// 1. ask your friend to count the no. of paths in the leftSubtree starting from root whose sum is equal to targetSum - root->val

	cnt += countPaths(root->left, targetSum - root->val);

	// 2. ask your friend to count the no. of paths in the rightSubtree starting from root whose sum is equal to targetSum - root->val

	cnt += countPaths(root->right, targetSum - root->val);

	return cnt;

}


int pathSum(TreeNode* root, int targetSum) {

	// base case

	if (root == NULL) {

		return 0;

	}

	// recursive case

	// count no. of paths in the given tree whose sum is equal to targetSum

	// 1. use root node

	// count no. of paths in the given tree starting from root whose sum is equal to targetSum

	int x = countPaths(root, targetSum);

	// 2. don't use root node

	// 2.a. count no. of paths in the leftSubtree whose sum is equal to targetSum

	int y = pathSum(root->left, targetSum);

	// 2.b. count no. of paths in the rightSubtree whose sum is equal to targetSum

	int z = pathSum(root->right, targetSum);

	return x + y + z;

}

int main() {

	TreeNode* root = NULL;

	root = new TreeNode(10);

	root->left = new TreeNode(5);
	root->left->left = new TreeNode(3);
	root->left->left->left = new TreeNode(3);
	root->left->left->right = new TreeNode(-2);
	root->left->right = new TreeNode(2);
	root->left->right->right = new TreeNode(1);

	root->right = new TreeNode(8);
	root->right->left = new TreeNode(13);
	root->right->right = new TreeNode(4);
	root->right->right->right = new TreeNode(1);

	int targetSum = 8;

	cout << pathSum(root, targetSum) << endl;

	return 0;
}