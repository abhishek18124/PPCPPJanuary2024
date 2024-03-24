#include<iostream>
#include<string>

using namespace std;

bool isGoodString(const string& str) { // we are passing str by const ref to avoid copy which is expensive

	// for (int i = 0; i < str.size(); i++) {

	// 	char ch = str[i];

	// 	if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {

	// 		// ch is a consonant, therefore str[] is not a good string

	// 		return false;

	// 	}

	// }

	for (char ch : str) {

		if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {

			// ch is a consonant, therefore str[] is not a good string

			return false;

		}

	}

	// str[] is a good string

	return true;

}

int main() {

	string str = "uoiea";

	// by default, a string object is passed by value i.e. you are sending a copy of the string argument

	isGoodString(str) ? cout << "good string" << endl : cout << "not a good string" << endl;

	return 0;
}