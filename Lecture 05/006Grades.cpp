#include<iostream>

using namespace std;

int main() {

	int marks;
	cout << "enter your marks(0-100) = ";
	cin >> marks;

	if (marks >= 91 and marks <= 100) {
		cout << "Grade A" << endl;
	} else if (marks >= 81 and marks <= 90) {
		cout << "Grade B" << endl;
	} else if (marks >= 71 and marks <= 80) {
		cout << "Grade C" << endl;
	} else if (marks >= 61 and marks <= 70) {
		cout << "Grade D" << endl;
	} else {
		cout << "Grade F" << endl;
	}

	return 0;
}