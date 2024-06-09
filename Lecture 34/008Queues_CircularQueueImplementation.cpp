#include<iostream>

using namespace std;

int main() {

	queue<int> q(5);

	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	q.print();

	q.pop();

	q.print();

	q.push(60);

	q.print();

	q.pop();

	q.push(70);

	q.print();

	return 0;
}
