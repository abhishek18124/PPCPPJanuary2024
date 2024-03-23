#include<iostream>

using namespace std;

int main() {

	char str[] = {'a', 'b', 'c', 'd', 'e', '\0'};

	cout << str << endl; // &str[0]

	int arr[] = {10, 20, 30, 40, 50};

	cout << arr << endl; // &arr[0]

	char str2[] = "hello"; // 6B length = 5 (we don't count '\0')

	cout << str2 << endl;

	char str3[] = "india"; // 6B length = 5 (we don't count '\0')

	for (int i = 0; str3[i] != '\0'; i++) {
		cout << str3[i] << " ";
	}

	cout << endl;

	// char str4[6] = "bharat"; // b, h, a, r, a, t, \0 you need >= 7B of memory

	return 0;
}