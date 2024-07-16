#include<iostream>
#include<unordered_map>

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

// recursive implementation

int helper(TreeNode* root) {

    // base case

    if (root == NULL) {
        return 0;
    }

    // recursive case

    // decide for the root node

    // option 1 : don't rob the root node

    int dontRobOption = helper(root->left) + helper(root->right);

    // option 2 : rob the root node

    int robOption = root->val;

    if (root->left != NULL) {
        robOption += helper(root->left->left) + helper(root->left->right);
    }

    if (root->right != NULL) {
        robOption += helper(root->right->left) + helper(root->right->right);
    }

    return max(dontRobOption, robOption);

}

int helperTopDown(TreeNode* root, unordered_map<TreeNode*, int>& dp) {

    // lookup

    if (dp.find(root) != dp.end()) {
        return dp[root];
    }

    // base case

    if (root == NULL) {
        return dp[root] = 0;
    }

    // recursive case

    // decide for the root node

    // option 1 : don't rob the root node

    int dontRobOption = helperTopDown(root->left, dp) + helperTopDown(root->right, dp);

    // option 2 : rob the root node

    int robOption = root->val;

    if (root->left != NULL) {
        robOption += helperTopDown(root->left->left, dp) + helperTopDown(root->left->right, dp);
    }

    if (root->right != NULL) {
        robOption += helperTopDown(root->right->left, dp) + helperTopDown(root->right->right, dp);
    }

    return dp[root] = max(dontRobOption, robOption);

}

int rob(TreeNode* root) {

    // return helper(root);

    unordered_map<TreeNode*, int> dp;
    return helperTopDown(root, dp);

}

int main() {

    TreeNode* root = new TreeNode(3);

    root->left = new TreeNode(2);
    root->left->right = new TreeNode(3);

    root->right = new TreeNode(3);
    root->right->right = new TreeNode(1);

    cout << rob(root) << endl;

    // TreeNode* root = new TreeNode(3);

    // root->left = new TreeNode(4);
    // root->left->left = new TreeNode(1);
    // root->left->right = new TreeNode(3);

    // root->right = new TreeNode(5);
    // root->right->right = new TreeNode(1);

    // cout << rob(root) << endl;

    return 0;
}