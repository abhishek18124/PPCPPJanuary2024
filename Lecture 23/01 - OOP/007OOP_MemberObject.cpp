#include<iostream>

using namespace std;

class creditCard {

public :

	string cardNumber;
	string bankName;

	creditCard()  {
		cout << "\ninside default constructor of \'creditCard\' class\n";
	}

	creditCard(string cn, string bn)  {
		cout << "\ninside parameterised constructor of \'creditCard\' class\n";
		cardNumber = cn;
		bankName = bn;
	}

};

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;
	creditCard card;

	// customer(string n, int a, char g, double c, string cn, string bn) {
	// 	cout << "\ninside parameterised constructor of \'customer\' class\n";
	// 	name = n;
	// 	age = a;
	// 	gender = g;
	// 	credits = c;
	// 	card.cardNumber = cn;
	// 	card.bankName = bn;
	// }

	customer(string n, int a, char g, double c, string cn, string bn) : card(cn, bn) {
		cout << "\ninside parameterised constructor of \'customer\' class\n";
		name = n;
		age = a;
		gender = g;
		credits = c;
	}

	void print() {
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl;
		cout << "card number = " << card.cardNumber << endl;
		cout << "bank name = " << card.bankName << endl << endl;
	}

};

int main() {

	customer c("Ramanujan", 32, 'M', 1729, "10008676020", "HDFC");
	c.print();

	return 0;
}