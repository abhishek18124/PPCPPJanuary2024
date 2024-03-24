#include<iostream>
#include<string>

using namespace std;

int main() {

	string str1 = "abc";

	string str2;

	str2 = str1; // copy assignment operator is used to make str2 a copy of str1

	string str3 = str1; // copy constructor is used to make str3 as a copy of str1

	string str4(str1); // copy constructor is used to make str4 as a copy of str1

	cout << str1 << " " << str2 << " " << str3 << " " << str4 << endl;

	return 0;
}