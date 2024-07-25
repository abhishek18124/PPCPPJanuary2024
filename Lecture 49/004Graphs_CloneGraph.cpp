/*

https://leetcode.com/problems/clone-graph/

// Definition for a Node.

class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

*/

class Solution {
public:
    Node* cloneGraph(Node* node) {

        if (!node) { // graph is empty
            return NULL;
        }

        unordered_map<Node*, Node*> cloneMap; // to store a mapping b/w nodes in the graph and their clones.
        queue<Node*> q; // to track vertices which have been cloned but the neighborList of the clone isn't populated.

        // create a clone of 'node'

        // todo ...

        while (!q.empty()) {

            // todo ...

        }

        // return the clone of 'node'

        // todo ...

    }
};