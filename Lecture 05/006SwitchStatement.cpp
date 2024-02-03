#include<iostream>

using namespace std;

int main() {

	int marks;
	cout << "enter your marks(0-100) = ";
	cin >> marks;

	char grade;

	if (marks >= 91 and marks <= 100) {
		grade = 'A';
	} else if (marks >= 81 and marks <= 90) {
		grade = 'B';
	} else if (marks >= 71 and marks <= 80) {
		grade = 'C';
	} else if (marks >= 61 and marks <= 70) {
		grade = 'D';
	} else {
		grade = 'F';
	}

	// if (grade == 'A') {
	// 	cout << "very good" << endl;
	// } else if (grade == 'B') {
	// 	cout << "good" << endl;
	// } else if (grade == 'C') {
	// 	cout << "average" << endl;
	// } else if (grade == 'D') {
	// 	cout << "poor" << endl;
	// } else { // grade == 'F'
	// 	cout << "very poor" << endl;
	// }

	switch (grade) { // variable on which you are switching must be char or int

	case 'A' : cout << "very good" << endl; break;
	case 'B' : cout << "good" << endl; break;
	case 'C' : cout << "average" << endl; break;
	case 'D' : cout << "poor" << endl; break;
	default : cout << "very poor" << endl; break;

	}

	return 0;
}