#include<iostream>
#include<string>

using namespace std;

int main() {

	string str = "abcdefabcdef";

	cout << str.substr(2, 5) << endl;

	string subString = str.substr(2, 5);
	cout << subString << endl;

	string str2 = "coding";

	cout << str2.substr(3) << endl;
	// cout << str2.substr(4, 10) << endl;

	return 0;
}