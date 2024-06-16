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


// vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

// 	// todo ...
// }

void dfs(TreeNode* root, int targetSum, vector<int>& path, vector<vector<int>>& allPaths) {

	// base case

	if (root == NULL) {
		return;
	}

	if (root->left == NULL and root->right == NULL) {

		if (root->val == targetSum) {

			// you've found a root-to-leaf path in the given tree whose sum is equal to targetSum

			path.push_back(root->val);

			for (int i = 0; i < path.size(); i++) {
				cout << path[i] << " ";
			}

			cout << endl;

			allPaths.push_back(path);

			path.pop_back();

		}

		return;

	}

	// recursive case

	path.push_back(root->val);

	dfs(root->left, targetSum - root->val, path, allPaths);
	dfs(root->right, targetSum - root->val, path, allPaths);

	path.pop_back(); // backtracking

}

vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

	vector<int> path;
	vector<vector<int>> allPaths;

	dfs(root, targetSum, path, allPaths);

	return allPaths;

}

int main() {

	TreeNode* root = NULL;

	root = new TreeNode(5);

	root->left = new TreeNode(4);
	root->left->left = new TreeNode(11);
	root->left->left->left = new TreeNode(7);
	root->left->left->right = new TreeNode(2);

	root->right = new TreeNode(8);
	root->right->left = new TreeNode(13);
	root->right->right = new TreeNode(4);
	root->right->right->left = new TreeNode(5);
	root->right->right->right = new TreeNode(1);

	int targetSum = 22;

	pathSum(root, targetSum);

	// vector<vector<int>> paths = pathSum(root, targetSum);

	// for (vector<int> path : paths) {
	// 	for (int node : path) {
	// 		cout << node << " ";
	// 	}
	// 	cout << endl;
	// }

	// cout << endl;

	return 0;
}