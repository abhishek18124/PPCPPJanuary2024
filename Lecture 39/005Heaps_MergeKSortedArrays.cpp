/*

    Given k sorted arrays, merge them and print the sorted output.

    k = 3
    Input : {
                {1, 3, 5, 7},
                {2, 4, 6, 8},
                {0, 9, 10, 11}
            }

    Output: 0 1 2 3 4 5 6 7 8 9 10 11

*/

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

class triple {

public:

    int val;
    int row;
    int col;

    triple(int val, int row, int col) {
        this->val = val;
        this->row = row;
        this->col = col;
    }

};

class tripleComparator {

public:

    bool operator()(triple a, triple b) {
        if (a.val < b.val) {
            // we want to give a higher priority
            return false;
        }
        return true;
    }

};

int main() {

    vector<vector<int>> inp = {
        {1, 3, 5, 7},
        {2, 4, 6, 8},
        {0, 9, 10, 11}
    };

    int k = inp.size();

    priority_queue<triple, vector<triple>, tripleComparator> minHeap;

    for (int i = 0; i < k; i++) {
        minHeap.push(triple(inp[i][0], i, 0));
    }

    vector<int> out;

    while (!minHeap.empty()) {

        triple minTriple = minHeap.top();
        minHeap.pop();

        int val = minTriple.val;
        int row = minTriple.row;
        int col = minTriple.col;

        out.push_back(val);

        if (col + 1 < inp[row].size()) {
            minHeap.push(triple(inp[row][col + 1], row, col + 1));
        }

    }

    for (int i = 0; i < out.size(); i++) {
        cout << out[i] << " ";
    }

    cout << endl;

    return 0;
}