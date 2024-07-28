/*

	Implementation of the disjoint set union data structure
	by using union by rank and path compression heuristics.

*/

#include<iostream>
#include<unordered_map>

using namespace std;

template <typename T>
class disjointSet {

	unordered_map<T, T> parentMap; // to store a mapping b/w vertices & their parents
	unordered_map<T, int> rankMap;   // to store a mapping b/w vertices & their ranks i.e. sizes

public :

	void createSet(T x) {
		parentMap[x] = x;
		rankMap[x] = 1;
	}

	T findSet(T x) {
		if (parentMap[x] == x) {
			return x;
		}

		return parentMap[x] = findSet(parentMap[x]);
	}

	void unionSet(T x, T y) {

		T lx = findSet(x);
		T ly = findSet(y);

		if (lx != ly) {

			int rx = rankMap[lx];
			int ry = rankMap[ly];

			if (rx < ry) {

				// lx will point to ly

				parentMap[lx] = ly;
				rankMap[ly] += rankMap[lx];

			} else {

				// ly will point to lx

				parentMap[ly] = lx;
				rankMap[lx] += rankMap[ly];

			}

		}

	}

};

int main() {

	disjointSet<int> ds;

	ds.createSet(1); // {1}
	ds.createSet(2); // {2}
	ds.createSet(3); // {3}
	ds.createSet(4); // {4}

	ds.unionSet(1, 2); // {1, 2}, {3}, {4}
	ds.unionSet(2, 3); // {1, 2, 3}, {4}

	cout << ds.findSet(2) << endl;

	ds.unionSet(3, 4); // {1, 2, 3, 4}

	cout << ds.findSet(4) << endl;

	return 0;
}
