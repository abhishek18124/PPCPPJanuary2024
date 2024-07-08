/*

	Implement a phonebook storing mapping between person's name and
	their phone numbers using an unordered_map.

*/

#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main() {

	unordered_map<string, vector<string>> phoneMap;

	phoneMap["Ayush"].push_back("1234");
	phoneMap["Ayush"].push_back("5678");
	phoneMap["Udbhav"].push_back("0000");
	phoneMap["Kanishka"].push_back("1111");
	phoneMap["Kanishka"].push_back("2222");

	for (pair<string, vector<string>> contact : phoneMap) {

		string name = contact.first;
		vector<string> nums = contact.second;

		cout << name << " : ";
		for (string num : nums) {
			cout << num << " ";
		}
		cout << endl;
	}

	return 0;
}