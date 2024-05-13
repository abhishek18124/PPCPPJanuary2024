#include<iostream>
#include<vector>

using namespace std;

bool searchWord(vector<vector<char>>& board, string word, int m, int n, int i, int j, int k) {
        
    // base case
    
    // todo ...

    // recursive case
    
    // todo ...
    
}

bool exist(vector<vector<char>>& board, string word) {
	int m = board.size();
	int n = board[0].size();
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if(board[i][j] == word[0]) {
				if(searchWord(board, word, m, n, i, j, 0)) {
					return true;
				}
			}
		}
	}

	return false;
}

	
int main() {

	vector<vector<char>> board = {{'A','B','C','E'},
	                              {'S','F','C','S'},
	                              {'A','D','E','E'}};

	string word = "ABCCED";

	exist(board, word) ? cout << "true" << endl :
	                     cout << "false" << endl;

	return 0;
}