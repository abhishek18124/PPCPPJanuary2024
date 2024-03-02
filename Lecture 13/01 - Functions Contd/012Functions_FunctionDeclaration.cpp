#include<iostream>

using namespace std;

// int multiply(int a, int b); // function declaration or function prototype
int multiply(int, int); // function declaration or function prototype


int main() {

	cout << multiply(2, 3) << endl;

	return 0;
}



int multiply(int a, int b) {
	return a * b;
}