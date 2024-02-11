#include<iostream>

using namespace std;

int main() {

	int a = 25;
	int b = 19;

	cout << "a&b : " << (a & b) << endl;

	cout << "a|b : " << (a | b) << endl;

	cout << "a^b : " << (a ^ b) << endl;

	cout << "~a  : " << (~a)  << endl;

	a = 0;

	cout << "~a  : " << (~a)  << endl;

	return 0;
}