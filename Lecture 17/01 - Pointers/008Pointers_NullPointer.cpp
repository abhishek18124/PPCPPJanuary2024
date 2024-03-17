#include<iostream>

using namespace std;

int main() {

	// null pointers are equal

	int* p = NULL;
	int* q = nullptr;
	int* r = 0;

	if (p == q and p == r) {
		cout << "they are equal";
	}

	// you cannot derefernce a null pointers

	return 0;
}