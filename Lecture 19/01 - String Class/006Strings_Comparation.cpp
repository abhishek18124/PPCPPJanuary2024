#include<iostream>
#include<string>

using namespace std;

int main() {

	string s1 = "abc";
	string s2 = "aef";

	cout << s1.compare(s2) << endl;

	cout << s2.compare(s1) << endl;

	string s3 = "abc";

	cout << s1.compare(s3) << endl;

	if (s1 > s2) {

		cout << s1 << " > " << s2 << endl;

	} else {

		cout << s1 << " < " << s2 << endl;

	}


	return 0;
}