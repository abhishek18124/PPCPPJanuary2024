#include<iostream>
#include<unordered_map>
#include<functional>

using namespace std;

class customer {

public :

	string name;
	int age;

	customer(string name, int age) {
		this->name = name;
		this->age = age;
	}

	bool operator==(const customer& other) const { // must be a const fn
		return this->age == other.age and this->name == other.name;
	}


};

class customerHash {

public:

	size_t operator()(customer c) const { // must be a const fn

		string name = c.name;
		hash<string> stringHash;
		size_t nameHashVal = stringHash(name);

		int age = c.age;
		hash<int> integerHash;
		size_t ageHashVal = integerHash(age);

		return nameHashVal ^ ageHashVal;

	}

};

int main() {

	unordered_map<customer, double, customerHash> ratingMap;

	ratingMap[customer("Parmeet", 19)] = 3.4;
	ratingMap[customer("Anandita", 18)] = 4.9;
	ratingMap[customer("Gautam", 20)] = 4.2;
	ratingMap[customer("Riya", 21)] = 3.1;
	ratingMap[customer("Ayush", 20)] = 2.7;

	for (pair<customer, double> p : ratingMap) {
		customer c = p.first;
		double rating = p.second;
		cout << "customer(" << c.name << ", " << c.age << ") = " << rating << endl;
	}

	ratingMap[customer("Ayush", 20)] = 1.9;

	for (pair<customer, double> p : ratingMap) {
		customer c = p.first;
		double rating = p.second;
		cout << "customer(" << c.name << ", " << c.age << ") = " << rating << endl;
	}

	return 0;
}