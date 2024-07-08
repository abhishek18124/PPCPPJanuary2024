#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>

using namespace std;

bool isduplicatePresent(vector<int> v) {

	unordered_map<int, int> freqMap;

	for (int i = 0; i < v.size(); i++) {

		// int x = v[i];
		// freqMap[x]++;

		freqMap[v[i]]++;

		if (freqMap[v[i]] > 1) {
			// v[i] is duplicate
			return true;
		}

	}

	for (pair<int, int> p : freqMap) {
		cout << p.first << " " << p.second << endl;
	}

	// duplicate not found

	return false;

}

bool isduplicatePresent2(vector<int> v) {

	unordered_set<int> us;

	for (int i = 0; i < v.size(); i++) {

		if (us.find(v[i]) != us.end()) {

			// v[i] is already present
			return true;

		}

		us.insert(v[i]);

	}

	// no duplicates
	return false;

}

int main() {

	vector<int> v = {1, 2, 3, 1};

	isduplicatePresent(v) ? cout << "duplicate found" << endl : cout << "duplicate not found" << endl;

	isduplicatePresent2(v) ? cout << "duplicate found" << endl : cout << "duplicate not found" << endl;

	return 0;
}