#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;

	customer() {
		cout << "\ninside the default constructor of the \'customer\' class\n" << endl;
	}

	customer(string n, int a, char g, double c) {
		cout << "\ninside the parameterised constructor of the \'customer\' class\n" << endl;
		name = n;
		age = a;
		gender = g;
		credits = c;
	}

	customer& setName(string n) {
		name = n;
		return *this;
	}

	customer& setAge(int a) {
		age = a;
		return *this;
	}

	customer& setGender(char g) {
		gender = g;
		return *this;
	}

	customer& setCredits(double c) {
		credits = c;
		return *this;
	}


	void print() {
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl << endl;
	}

};

int main() {

	customer c("Ramanujan", 32, 'M', 1729);
	c.print();

	c.setName("Aryabhata").setAge(74).setCredits(0);
	c.print();

	return 0;
}