/*
	https://leetcode.com/problems/longest-consecutive-sequence/
*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:

	// steps = 2n time ~ O(n)
	// space = O(n) due to startMap

	int longestConsecutive(vector<int>& nums) {

		// 1. build a startMap

		unordered_map<int, bool> startMap;

		for (int num : nums) { // linear time

			if (startMap.find(num - 1) == startMap.end()) {

				// num-1 is not present so for now num can be a starting point for seq. of cons. elements

				startMap[num] = true;

			} else {

				// num-1 is present so num cannot be starting point

				startMap[num] = false;

			}

			if (startMap.find(num + 1) != startMap.end()) {

				// num+1 cannot be the starting point

				startMap[num + 1] = false;

			}

		}

		for (pair<int, bool> p : startMap) {

			int el = p.first;
			bool canStart = p.second;
			cout << el << " " << canStart << endl;

		}

		int maxSoFar = 0;

		for (pair<int, bool> p : startMap) { // linear time
			int key = p.first;
			bool canStart = p.second;
			if (canStart) {

				// we can start a seq. of con. elements from key

				int cnt = 0;
				while (startMap.find(key) != startMap.end()) {
					cnt++;
					key++;
				}

				maxSoFar = max(maxSoFar, cnt);

			}
		}

		return maxSoFar;

	}
};

int main() {

	Solution s;

	vector<int> nums = {1, 2, 100, 101, 102, 200, 201};

	cout << s.longestConsecutive(nums) << endl;

}
