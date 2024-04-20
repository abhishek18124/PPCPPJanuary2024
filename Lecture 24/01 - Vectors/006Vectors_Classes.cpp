#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class customer {

public:

	string name;
	int age;
	char gender;
	double credits;

	customer(string name, int age, char gender, double credits) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->credits = credits;
	}
};

// return true  if you want a to be ordered before b otherwise return false

bool ageComparator(customer a, customer b) {

	if (a.age < b.age) {

		// you want a to be ordered before b since we sorting in the inc. order based on age

		return true;

	}

	return false;

}

// return true  if you want a to be ordered before b otherwise return false

bool creditsCompartor(customer a, customer b) {

	if (a.credits > b.credits) {

		// you want a to be ordered before b since we sorting in the dec. order based on credits

		return true;

	}

	return false;

}

class creditsComparatorFunctor {
public:

	// return true if you want a to be ordered before b otherwise return false

	bool operator()(customer a, customer b) {

		if (a.credits > b.credits) {

			// you want a to be ordered before b since we sorting in the dec. order based on credits

			return true;

		}

		return false;

	}

};

int main() {

	vector<customer> v;

	customer c1("Ramanujan", 32, 'M', 1729);

	v.push_back(c1);
	v.push_back(customer("JC Bose", 78, 'M', 2500));
	v.push_back(customer("Aryabhata", 74, 'M', 0));
	v.push_back(customer("Vikram", 52, 'M', 1500));
	v.push_back(customer("Homi", 56, 'M', 1000));

	for (customer c : v) {

		cout << c.name << " " << c.age <<  " " << c.gender << " " << c.credits << endl;

	}

	cout << endl;

	sort(v.begin(), v.end(), ageComparator);

	for (customer c : v) {

		cout << c.name << " " << c.age <<  " " << c.gender << " " << c.credits << endl;

	}

	cout << endl;

	// sort(v.begin(), v.end(), creditsCompartor);

	creditsComparatorFunctor obj;
	sort(v.begin(), v.end(), obj);

	for (customer c : v) {

		cout << c.name << " " << c.age <<  " " << c.gender << " " << c.credits << endl;

	}

	cout << endl;

	return 0;
}