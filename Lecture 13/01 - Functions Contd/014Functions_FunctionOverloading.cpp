#include<iostream>
#include<cmath>

using namespace std;

float areaOfTriangle(int b, int h) {
	return 0.5 * b * h;
}

float computeSemiPerimeter(int a, int b, int c) {
	return 0.5 * (a + b + c);
}

float areaOfTriangle(int a, int b, int c) {
	float s = computeSemiPerimeter(a, b, c);
	return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {

	cout << areaOfTriangle(4, 5) << endl;
	cout << areaOfTriangle(3, 4, 5) << endl;

	return 0;
}