#include<iostream>

using namespace std;

class ListNode {
public:

	int val;
	ListNode* next;

	ListNode(int val) {
		this->val = val;
		this->next = NULL;
	}

};

void insertAtHead(ListNode*& head, int val) {

	ListNode* n = new ListNode(val);
	n->next = head;
	head = n;

}


void printLinkedList(ListNode* head) {

	while (head) { // head != NULL
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;
}

ListNode* kthLastNode(ListNode* head, int k) {

	// 1. move fast pointer k-steps forward

	ListNode* fast = head;
	while (k--) {
		fast = fast->next;
	}

	// 2. move slow and fast at the same till fast becomes NULL
	ListNode* slow = head;
	while (fast != NULL) {
		slow = slow->next;
		fast = fast->next;
	}

	return slow;

}

int main() {

	ListNode* head = NULL;

	insertAtHead(head, 70);
	insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	int k = 0;

	ListNode* ans = kthLastNode(head, k);

	cout << ans -> val << endl;

	return 0;
}