#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;

	customer() {

		cout << "\ninside the default constructor of the customer class\n";

	}

	customer(string n, int a, char g, double c) {

		cout << "\ninside the parameterised constructor of the customer class\n";

		name = n;
		age = a;
		gender = g;
		credits = c;

	}

	void print() {
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl << endl;
	}
};



int main() {

	customer c1("Ramanujan", 32, 'M', 1729);

	c1.print();

	customer c2("Aryabhata", 74, 'M', 0);

	c2.print();

	customer c3;

	return 0;
}