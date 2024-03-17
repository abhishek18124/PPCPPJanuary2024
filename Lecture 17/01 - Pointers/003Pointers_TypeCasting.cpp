#include<iostream>

using namespace std;

int main() {

	char ch = 'A';
	int* ptr = (int*)&ch;
	cout << ptr << endl;

	int x = 10;
	char* p = (char*)&x;
	cout << p << endl;

	return 0;
}