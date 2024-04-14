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

	customer(const customer& c) {
		cout << "\ninside the copy constructor of the \'customer\' class\n" << endl;
		name = c.name;
		age = c.age;
		gender = c.gender;
		credits = c.credits;

	}

	void operator=(const customer& c) {
		cout << "\ninside the copy assignment operator of the \'customer\' class\n" << endl;
		name = c.name;
		age = c.age;
		gender = c.gender;
		credits = c.credits;
	}

	void print() {
		cout << "name = " << name << endl;
		cout << "age =  " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl << endl;
	}

};

int main() {

	customer c1("Ramanujan", 32, 'M', 1729);
	c1.print();

	customer c2;
	// c2 = c1;
	c2.operator = (c1);
	c2.print();


	return 0;
}