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

	void print() {
		cout << "name = " << *namePtr << endl;
		cout << "age = " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl << endl;
	}

	~customer() {
		cout << "\nI am inside the destructor of the customer class destructing\n" << *namePtr << endl;
		delete namePtr;
	}

};

int main() {


	customer c1("Ramanujan", 32, 'M', 1729);
	c1.print();

	customer c2("Aryabhata", 74, 'M', 0);
	c2.print();

	return 0;
}