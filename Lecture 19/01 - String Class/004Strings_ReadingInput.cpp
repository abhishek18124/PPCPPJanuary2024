#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main() {

	// string str1;

	// cout << "enter a string : ";
	// cin >> str1;

	// cout << "you've entered str1 = " << str1 << endl;

	string str2;

	cout << "enter another string : ";
	// getline(cin, str2); // stops reading upon encountering '\n', doesn't ignore leading whitespaces
	// getline(cin >> ws, str2); // stops reading upon encountering '\n', ignore leading whitespaces
	// getline(cin, str2, '$'); // stops reading upon encountering '$', doesn't ignore leading whitespaces
	getline(cin >> ws, str2, '$'); // stops reading upon encountering '$', ignore leading whitespaces

	cout << "you've entered str2 = " << str2 << endl;

	return 0;
}