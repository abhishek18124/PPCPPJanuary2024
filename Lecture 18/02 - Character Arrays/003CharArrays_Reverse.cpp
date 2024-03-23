#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

void reverseString(char str[]) {

	int n = strlen(str);

	int i = 0;
	int j = n - 1;

	while (i < j) {

		swap(str[i], str[j]);
		i++;
		j--;

	}

}

int main() {

	char str[] = "hello";

	int n = strlen(str);

	cout << "Original string : " << str << endl;

	reverseString(str);

	cout << "Reversed  string after 1st reverse : " << str << endl;

	strrev(str);

	cout << "Reversed string after 2nd reverse : " << str << endl;

	reverse(str, str + n);

	cout << "Reversed string after 3rd reverse : " << str << endl;

	return 0;
}