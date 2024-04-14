#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;

};

void printByVal(customer c) {

	cout << "name = " << c.name << endl;
	cout << "age  = " << c.age << endl;
	cout << "gender = " << c.gender << endl;
	cout << "credits = " << c.credits << endl << endl;

}


void printByRef(customer& c) {

	cout << "name = " << c.name << endl;
	cout << "age  = " << c.age << endl;
	cout << "gender = " << c.gender << endl;
	cout << "credits = " << c.credits << endl << endl;

}

int main() {

	customer c1;

	c1.name = "Ramanujan";
	c1.age = 32;
	c1.gender = 'M';
	c1.credits = 1729;

	printByVal(c1); // by default c1 is passed by value
	printByRef(c1);

	customer c2;

	c2.name = "Aryabhata";
	c2.age = 74;
	c2.gender = 'M';
	c2.credits = 0;

	printByVal(c2); // by default c2 is passed by value
	printByRef(c2);

	return 0;
}