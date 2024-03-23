#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char str[] = "a$bc.de..f.gh$i";
	char dlim[] = ".$";

	char* ptr = strtok(str, dlim);

	while (ptr != NULL) {

		cout << ptr << endl;
		ptr = strtok(NULL, dlim);

	}

	cout << endl;

	return 0;
}