#include<iostream>

using namespace std;

class customer {

public :

	string* namePtr;
	int age;
	char gender;
	double credits;

	customer(string n, int a, char g, double c) {
		cout << "\ninside the parameterised constructor of the \'customer\' class\n" << endl;
		namePtr = new string;
		*namePtr = n;
		age = a;
		gender = g;
		credits = c;
	}

	string getName() {
		return *namePtr;
	}

	void setName(string n) {
		*namePtr = n;
	}

	void print() {
		cout << "name = " << *namePtr << endl;
		cout << "age = " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl << endl;
	}

};

int main() {

	customer c1("Ramanujan", 32, 'M', 1729);
	c1.print();

	customer c2 = c1;
	c2.print();

	c2.age = 64;

	cout << c1.age << " " << c2.age << endl;

	c2.setName("Ayush");

	cout << c1.getName() << " " << c2.getName() << endl;


	return 0;
}