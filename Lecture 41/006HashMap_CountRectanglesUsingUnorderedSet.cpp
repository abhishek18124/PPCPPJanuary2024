/*
	Given N cartesian points in a 2D plane, count the number of axis parallel rectangles that
	can be formed.

	Example

	Input : {(0, 0), (0, 1), (1, 1), (1, 0), (2, 1), (2, 0), (3, 1), (3, 0)}
	Output: 6

*/

#include<iostream>
#include<vector>
#include<unordered_set>
#include<functional>

using namespace std;

class Point {
public:
	int x;
	int y;

	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}

	bool operator==(Point other) const {
		return this->x == other.x and this->y == other.y;
	}

};

class PointHash {

public:

	size_t operator()(Point p) const {

		return hash<int>()(p.x) ^ hash<int>()(p.y);

	}

};

int main() {

	vector<Point> points{
		Point(1, 1),
		Point(1, 2),
		Point(2, 1),
		Point(2, 2),
		Point(3, 1),
		Point(3, 2)
	};

	int n = points.size();

	unordered_set<Point, PointHash> s(points.begin(), points.end());

	// time : O(n^2)

	int cnt = 0;

	for (int i = 0; i < n - 1; i++) {
		Point p1 = points[i];
		for (int j = i + 1; j < n; j++) {
			Point p2 = points[j];
			if (p1.x != p2.x && p1.y != p2.y) {
				Point p3 = Point(p2.x, p1.y);
				Point p4 = Point(p1.x, p2.y);
				// check whether points 'p3' and 'p4' are present in the 2D plane or not
				if (s.find(p3) != s.end() && s.find(p4) != s.end()) {
					cnt++;
				}
			}
		}
	}

	cout << "count = " << cnt / 2 << endl;

	return 0;
}