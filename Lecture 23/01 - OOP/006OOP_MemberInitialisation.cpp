#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;

	customer(string n, int a, char g, double c)
		: name(n), age(a), gender(g), credits(c)

	{
		cout << "\ninside the parameterised constructor of the \'customer\' class\n" << endl;
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

	return 0;
}