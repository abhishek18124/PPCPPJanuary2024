#include<iostream>

using namespace std;

void greet() {

	cout << "hello world" << endl;

}

int main() {

	cout << "I am inside the main(), before greet()" << endl;

	greet();

	cout << "I am inside the main(), after greet()" << endl;

	return 0;
}