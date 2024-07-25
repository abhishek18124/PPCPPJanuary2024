#include<iostream>
#include<vector>

using namespace std;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

int dfsHelper(vector<vector<int>> grid,
              vector<vector<bool>>& visited,
              int m, int n,
              int i, int j) {

	// mark the (i, j)th vertex as visited

	visited[i][j] = true;

	int cnt = 1; // to track the count of vertices in the current component

	// visit the unvisited neighbours of the (i, j)th vertex

	// int nx = i;
	// int ny = j + 1;

	// if (nx >= 0 and nx < m and ny >= 0 and ny < n and grid[nx][ny] == 1 and !visited[nx][ny]) {
	// 	cnt += dfsHelper(grid, visited, m, n, nx, ny);
	// }

	// nx = i;
	// ny = j - 1;

	// if (nx >= 0 and nx < m and ny >= 0 and ny < n and grid[nx][ny] == 1 and !visited[nx][ny]) {
	// 	cnt += dfsHelper(grid, visited, m, n, nx, ny);
	// }

	// nx = i - 1;
	// ny = j;

	// if (nx >= 0 and nx < m and ny >= 0 and ny < n and grid[nx][ny] == 1 and !visited[nx][ny]) {
	// 	cnt += dfsHelper(grid, visited, m, n, nx, ny);
	// }

	// nx = i + 1;
	// ny = j;

	// if (nx >= 0 and nx < m and ny >= 0 and ny < n and grid[nx][ny] == 1 and !visited[nx][ny]) {
	// 	cnt += dfsHelper(grid, visited, m, n, nx, ny);
	// }

	for (int k = 0; k < 4; k++) {
		int nx = i + dx[k];
		int ny = j + dy[k];

		if (nx >= 0 and nx < m and ny >= 0 and ny < n and grid[nx][ny] == 1 and !visited[nx][ny]) {
			cnt += dfsHelper(grid, visited, m, n, nx, ny);
		}

	}

	return cnt;

}

int largestIsland(vector<vector<int>> grid, int m, int n) {
	vector<vector<bool>> visited(m, vector<bool>(n, false)); // to keep track of visited vertices
	int maxArea = 0; // to keep track of the area of the largest island
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] == 1 and !visited[i][j]) {
				maxArea = max(maxArea,
				              dfsHelper(grid, visited, m, n, i, j));
			}
		}
	}
	return maxArea;
}

int main() {

	vector<vector<int>> grid = {{1, 0, 0, 1, 0},
		{1, 0, 1, 0, 0},
		{0, 0, 1, 0, 1},
		{1, 0, 1, 1, 1},
		{1, 0, 1, 1, 0}
	};

	int m = grid.size();
	int n = grid[0].size();

	cout << largestIsland(grid, m, n) << endl;

	return 0;
}