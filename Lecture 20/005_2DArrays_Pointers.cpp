#include<iostream>

using namespace std;

int main() {

	int arr[3][4];

	cout << arr[0] << " " << &arr[0][0] << endl;
	cout << arr[1] << " " << &arr[1][0] << endl;
	cout << arr[2] << " " << &arr[2][0] << endl;

	return 0;
}