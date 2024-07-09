#include<iostream>
#include<unordered_map>
#include<functional>

using namespace std;

class PairHash {

public:


	size_t operator()(pair<string, int> p)  const {

		hash<string> stringHash;
		size_t nameHashVal = stringHash(p.first);


		hash<int> integerHash;
		size_t ageHashVal = integerHash(p.second);

		return nameHashVal ^ ageHashVal;

		// return hash<string>()(p.first) ^ hash<int>()(p.second);

	}

};

int main() {

	unordered_map<pair<string, int>, double, PairHash> ratingMap;

	ratingMap[ {"Parmeet", 19}] = 4.2;
	ratingMap[ {"Anandita", 18}] = 4.9;
	ratingMap[ {"Ayush", 20}] = 2.7;

	for (pair<pair<string, int>, double> p : ratingMap) {
		pair<string, int> c = p.first;
		double rating = p.second;
		cout << "customer(" << c.first << ", " << c.second << ") = " << rating << endl;
	}

	return 0;
}