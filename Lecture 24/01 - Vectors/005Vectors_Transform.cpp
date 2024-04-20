#include<iostream>
#include<vector>

using namespace std;

int add1(int y) {
	return 1 + y;
}

int add2(int y) {
	return 2 + y;
}

int add3(int y) {
	return 3 + y;
}

class addx {

public:

	int x;

	addx(int x) {
		this->x = x;
	}

	int operator()(int y) {
		return y + x;
	}

};

int main() {

	vector<int> inp = {1, 2, 3, 4, 5};

	for (int i = 0; i < inp.size(); i++) {
		cout << inp[i] << " ";
	}

	cout << endl;

	vector<int> out(inp.size());

	// transform(inp.begin(), inp.end(), out.begin(), add1); // [2, 3, 4, 5, 6]

	addx obj(1);

	transform(inp.begin(), inp.end(), out.begin(), obj); // [2, 3, 4, 5, 6]

	for (int i = 0; i < out.size(); i++) {
		cout << out[i] << " ";
	}

	cout << endl;

	// transform(inp.begin(), inp.end(), out.begin(), add2); // [3, 4, 5, 6, 7]
	transform(inp.begin(), inp.end(), out.begin(), addx(2)); // [2, 3, 4, 5, 6]

	for (int i = 0; i < out.size(); i++) {
		cout << out[i] << " ";
	}

	cout << endl;

	// transform(inp.begin(), inp.end(), out.begin(), add3); // [4, 5, 6, 7, 8]
	transform(inp.begin(), inp.end(), out.begin(), addx(3)); // [4, 5, 6, 7, 8]

	for (int i = 0; i < out.size(); i++) {
		cout << out[i] << " ";
	}

	cout << endl;



	return 0;
}