#include<iostream>
#include<string>

using namespace std;

int main() {

	string s1 = "abc";
	string s2 = "def";

	s1.append(s2);

	cout << s1 << endl;
	cout << s2 << endl << endl;

	string s3 = "pqr";
	string s4 = "xyz";

	cout << s3 + s4 << endl;
	cout << s3 << endl;
	cout << s4 << endl << endl;

	s3 = s3 + s4;

	cout << s3 << endl;
	cout << s4 << endl << endl;

	return 0;
}