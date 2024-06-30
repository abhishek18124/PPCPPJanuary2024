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

int main() {

    vector<vector<int>> inp = {
        {1, 3, 5, 7},
        {2, 4, 6, 8},
        {0, 9, 10, 11}
    };

    int k = inp.size();

    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;

    for (int i = 0; i < k; i++) {
        minHeap.push({inp[i][0], i, 0});
    }

    vector<int> out;

    while (!minHeap.empty()) {

        vector<int> minTriple = minHeap.top();
        minHeap.pop();

        int val = minTriple[0];
        int row = minTriple[1];
        int col = minTriple[2];

        out.push_back(val);

        if (col + 1 < inp[row].size()) {
            minHeap.push({inp[row][col + 1], row, col + 1});
        }

    }

    for (int i = 0; i < out.size(); i++) {
        cout << out[i] << " ";
    }

    cout << endl;

    return 0;
}