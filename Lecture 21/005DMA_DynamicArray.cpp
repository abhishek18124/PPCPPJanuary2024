#include<iostream>

using namespace std;

resize(int* A, int c) {
	cout << "resizing from " 
	     << c*sizeof(int) << "B to " 
	     << 2*c*sizeof(int) << "B" << endl; 
	// todo ...
}

int main() {

	int* A = new int[1];
	int c = 1; // to store the maximum capacity of the dynamic array
	int i = 0; // to store the size of the dynamic array

	int x; // to store the integer value read from the user

	while(true) {

		cout << ">> ";
		cin >> x;

		// todo ...

	}

	// print the dynamic array 

	for(int j=0; j<i; j++) {
		cout << a[j] << " ";
	}

	cout << endl;

	return 0;

}