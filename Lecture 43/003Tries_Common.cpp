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
	int n;

public :

	trie() {
		root = new node('#');
		n = 0;
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
		n++;
	}

	// time : O(len of str) i.e. O(m)

	string longestCommonPrefix(string str) {

		node* cur = root;
		string prefix = "";

		for (char ch : str) {

			cur = cur->childMap[ch];
			if (cur->freq != n) break;
			prefix += ch;

		}

		return prefix;

	}

};


int main() {

	string words[] = {"flow", "floor", "fly"};

	// nm

	trie t;
	for (string word : words) {
		t.insert(word);
	}

	// m

	cout << t.longestCommonPrefix(words[0]) << endl;

	// total time : nm + m
	// total space : nm due to trie

	return 0;
}