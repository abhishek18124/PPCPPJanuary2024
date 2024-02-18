#include<iostream>

using namespace std;

int main() {

	int arr[5];

	cout << sizeof(arr) << "B" << endl;

	cout << sizeof(arr) / sizeof(int) << endl;

	char str[10];

	cout << sizeof(str) << "B" << endl;

	cout << sizeof(str) / sizeof(char) << endl;

	double brr[20];

	cout << sizeof(brr) << "B" << endl;

	cout << sizeof(brr) / sizeof(double) << endl; `

	return 0;
}