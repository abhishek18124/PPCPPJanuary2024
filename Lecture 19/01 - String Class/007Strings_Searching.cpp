#include<iostream>
#include<string>

using namespace std;

int main() {

	string str = "abcdefabcdef";

	cout << str.find("abc") << endl;
	cout << str.find("def") << endl;
	cout << str.rfind("abc") << endl;
	cout << str.rfind("def") << endl;

	cout << str.find("xyz") << endl;
	cout << string::npos << endl;

	if (str.find("xyz") == string::npos) {
		cout << "xyz is not found" << endl;
	} else {
		cout << "xyz is found" << endl;
	}

	return 0;
}