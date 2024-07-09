/*
	Given N cartesian points in a 2D plane, count the number of right-angled triangles that
	can be formed such that the base or perpendicular is parallel to the x-axis or y-axis.

	Examples

	Input : {(0, 0),
	         (2, 0),
	         (0, 1)}

	Output: 1

	Input : {(1, 2),
			 (2, 0),
			 (2, 2),
			 (2, 3),
			 (4, 2)}

	Output: 4
*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Point {
public:
	int x;
	int y;

	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

int main() {

	vector<Point> points = {
		Point(1, 2),
		Point(2, 0),
		Point(2, 2),
		Point(2, 3),
		Point(4, 2)
	};

	// time : O(n^2)

	int cnt = 0;

	for (Point p : points) {

		// find the no. of axis parallel right-angled triangles around p

		// 1. find the no. of points in the 2D whose x-coor is equal to p.x

		// 2. find the no. of points in the 2D whose y-coor is equal to p.y

		int a = 0; // no. of points in 2D plane whose x-coor is equal to p.x
		int b = 0; // no. of points in 2D plane whose y-coor is equal to p.y

		for (Point pp : points) {

			if (pp.x == p.x) {
				a++;
			}

			if (pp.y == p.y) {
				b++;
			}

		}

		cnt += (a - 1) * (b - 1); // subtract -1 to excl. pivot

	}

	cout << cnt << endl;

	return 0;
}