#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;

};

int main() {

	customer c1; // object declaration

	c1.name = "Ayush";
	c1.age = 18;
	c1.gender = 'M';
	c1.credits = 500;

	cout << "name = " << c1.name << endl;
	cout << "age  = " << c1.age << endl;
	cout << "gender = " << c1.gender << endl;
	cout << "credits = " << c1.credits << endl << endl;

	customer c2;

	c2.name = "tanmay";
	c2.age = 19;
	c2.gender = 'M';
	c2.credits = 100;

	cout << "name = " << c2.name << endl;
	cout << "age  = " << c2.age << endl;
	cout << "gender = " << c2.gender << endl;
	cout << "credits = " << c2.credits << endl << endl;

	return 0;
}