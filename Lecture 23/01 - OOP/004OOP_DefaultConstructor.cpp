#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;

	void print() {
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl;
	}

	customer() {

		cout << "\ninside the default constructor of the customer class\n";

	}
};

int main() {

	customer c1;

	customer c2;


	return 0;
}