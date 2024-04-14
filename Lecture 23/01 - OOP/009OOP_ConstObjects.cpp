#include<iostream>

using namespace std;

class customer {

private:

	string name;
	int age;
	char gender;
	double credits;

public :

	customer(string n, int a, char g, double c) {
		cout << "\ninside the parameterised constructor of the \'customer\' class\n" << endl;
		name = n;
		age = a;
		gender = g;
		credits = c;
	}

	string getName() {
		return name;
	}

	void setName(string n) {
		name = n;
	}

	int getAge() {
		return age;
	}

	void setAge(int a) {
		age = a;
	}

	char getGender() {
		return gender;
	}

	void setGender(char g) {
		gender = g;
	}

	double getCredits() {
		return credits;
	}

	void setCredits(double c) {
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

	customer c("Ramanujan", 32, 'M', 1729);

	return 0;
}