#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {

	string str = "abcdef";

	// reverse(str.begin(), str.end());

	reverse(str.begin() + 2, str.begin() + 5);

	cout << str << endl;

	reverse(str.begin() + 2, str.end() - 1);

	cout << str << endl;

	return 0;
}