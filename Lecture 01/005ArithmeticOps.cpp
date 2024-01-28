#include<iostream>

using namespace std;

int main() {

	int a = 10;
	int b = 5;

	cout << "a+b = " << a + b << endl;
	cout << "a-b = " << a - b << endl;
	cout << "a*b = " << a*b << endl;
	cout << "a/b = " << a / b << endl;
	cout << "a%b = " << a % b << endl;

	int x = 10;
	int y = 3;
	cout << "x/y = " << x / y << endl;

	cout << "x/y = " << (float)x  / y << endl;
	cout << "x/y = " << x  / (float)y << endl;

	cout << "x/y = " << float(x) / y << endl;
	cout << "x/y = " << x  / float(y) << endl;

	cout << "x/y = " << static_cast<float>(x) / y << endl;
	cout << "x/y = " << x / static_cast<float>(y) << endl;

	cout << "3+5*4 = " << 3 + 5 * 4 << endl;
	cout << "8-4/2 = " << 8 - 4 / 2 << endl;
	cout << "(3+5)*4 = " << (3 + 5) * 4 << endl;
	cout << "(8-4)/2 = " << (8 - 4) / 2 << endl;
	cout << "100/10*10 = " << 100 / 10 * 10 << endl;
	cout << "5-2+3 = " << 5 - 2 + 3 << endl;

	return 0;
}