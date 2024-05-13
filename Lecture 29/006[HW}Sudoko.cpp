/*

Sudoku

Given a partially filled 'n x n' grid, the goal is to assign digits from 1 to 9 to the empty cells 
so that every row, column, and subgrid of size '√n x √n'  contains exactly one instance of 
the digits from 1 to 9. 

Assume 'n' is a perfect square, hence there are 'n' subgrids of size '√n x √n' each.


*/

#include<iostream>
#include<cmath>

using namespace std;

void solveSudoku(int grid[][9], int n, int i, int j) {

	// base case 
	if(i == n) {
		// all empty cells have been assigned valid digits
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cout << grid[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return;
	}

	// recursive case

	if(j == n) {
		// digits have been assigned to all the cells in the ith row -
		// move to the next row, and start filling from its 0th cell
	}

	if(grid[i][j] != 0) {
		// (i, j)th cell is already assigned a digit - 
		// move to the next cell at the (i, j+1)th idx
	}

	// assign a valid digit 'd' to the (i, j)th cell where 1<=d<=9

}

int main() {

	int n = 9;
	int grid[][9] = {{3, 0, 6, 5, 0, 8, 4, 0, 0}, 
			         {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
			         {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
			         {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
			         {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
			         {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
			         {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
			         {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
			         {0, 0, 5, 2, 0, 6, 3, 0, 0}};

	// todo ...
	
	return 0;
}