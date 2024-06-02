#include<iostream>

using namespace std;

template <typename T>

class ListNode {
public:

	T val;
	ListNode<T>* next;

	ListNode(T val) {
		this->val = val;
		this->next = NULL;
	}

};

template <typename T>
class forward_list {

	ListNode<T>* head;
	int cnt;

public :

	forward_list() {
		head = NULL;
		cnt = 0;
	}

	void push_front(T val) {
		ListNode<T>* n = new ListNode<T>(val);
		n->next = head;
		head = n;
		cnt++;
	}

	void pop_front() {
		if (!head) {
			return;
		}

		ListNode<T>* tmp = head;
		head = head->next;
		delete tmp;
		cnt--;
	}

	int size() {
		return cnt;
	}

	bool empty() {
		return head == NULL;
	}

	T front() {
		return head->val;
	}

	void traverse() {
		ListNode<T>* tmp = head;
		while (tmp) {
			cout << tmp->val << " ";
			tmp = tmp->next;
		}
		cout << endl;
	}
};

template <typename T>
class stack {

	forward_list<T> fw;

public :

	void push(T val) {
		fw.push_front(val);
	}

	void pop() {
		fw.pop_front();
	}

	int size() {
		return fw.size();
	}

	bool empty() {
		return fw.empty();
	}

	T top() {
		return fw.front();
	}

};


int main() {

	stack<int> s;

	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	return 0;
}