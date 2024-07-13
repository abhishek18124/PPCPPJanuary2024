#include<iostream>
#include<unordered_map>

using namespace std;

class node {

public :

	char ch;
	bool terminal;
	unordered_map<char, node*> childMap;
	int freq;

	node(char ch) {
		this->ch = ch;
		this->terminal = false;
		this->freq = 0;
	}

};

class trie {
	node* root;

public :

	trie() {
		root = new node('#');
	}

	// time : O(len of str)

	void insert(string str) {
		node* cur = root;
		for (char ch : str) {
			if (cur->childMap.find(ch) == cur->childMap.end()) {
				node* n = new node(ch);
				cur->childMap[ch] = n;

			}
			cur = cur->childMap[ch];
			cur->freq++;
		}
		cur->terminal = true;
	}

	// time : O(len of str) i.e. O(m)

	string uniquePrefix(string str) {

		node* cur = root;
		string prefix = "";

		for (char ch : str) {

			cur = cur->childMap[ch];
			prefix += ch;

			if (cur->freq == 1) {
				return prefix;
			}

		}

		return "";

	}

};



int main() {

	string words[] = {"code", "coder", "coding", "new", "newon"};

	trie t;
	for (string word : words) {
		t.insert(word);
	}

	// time : O(nm) where n is the length of word seq and m is len of each word
	// space: O(nm)

	for (string word : words) {
		cout << "uniquePrefix(" << word << ") = " << t.uniquePrefix(word) << endl;
	}

	return 0;
}