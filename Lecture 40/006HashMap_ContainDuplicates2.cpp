#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool f(vector<int> v, int k) {

	unordered_map<int, int> indexMap;
	for (int i = 0; i < v.size(); i++) { // O(n) // space - O(n) due map

		// check if you've seen v[i] previously
		if (indexMap.find(v[i]) != indexMap.end()) {
			// you've seen v[i] previously
			int lastOccIndex = indexMap[v[i]];
			if (i - lastOccIndex <= k) {
				return true;
			}
		}

		indexMap[v[i]] = i;

	}

	return false;

}

int main() {

	vector<int> v = {1, 2, 3, 1, 2, 3};
	int k = 1;

	f(v, k) ? cout << "valid-pair found" << endl : cout << "no valid-pair found" << endl;

	return 0;
}