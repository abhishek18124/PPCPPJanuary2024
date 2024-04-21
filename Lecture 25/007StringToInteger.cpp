#include<iostream>

using namespace std;

int stringToInteger(string str, int n) {

	// base case

	if (str.empty()) { // str == "" // n == 0
		return 0;
	}

	// recursive case

	// convert str into integer

	// 1. extract the subString starting from the 0th index of length n-1

	string subString = str.substr(0, n - 1);

	// 2. ask your friend to convert subString into an integer

	int integerFromMyFriend = stringToInteger(subString, n - 1);

	return integerFromMyFriend * 10 + (str[n - 1] - '0');

}

int main() {

	string str = "12345";
	int n = str.size();

	int ans = stringToInteger(str, n);

	cout << "ans = " << ans << endl;
	cout << "ans = " << ans + 1 << endl;

	return 0;
}