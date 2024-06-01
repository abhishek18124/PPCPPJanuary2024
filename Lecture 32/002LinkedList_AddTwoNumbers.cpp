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
	while (head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}

ListNode* sumOfLinkedList(ListNode* head1, ListNode* head2) {

	ListNode* head = NULL;
	int c = 0;

	while (head1 != NULL and head2 != NULL) {

		int d1 = head1->val;
		int d2 = head2->val;

		int s = d1 + d2 + c;

		ListNode* n = new ListNode(s % 10);
		n->next = head;
		head = n;

		c = s / 10;

		head1 = head1->next;
		head2 = head2->next;

	}

	while (head1 != NULL) {

		int d1 = head1->val;

		int s = d1 + c;

		ListNode* n = new ListNode(s % 10);
		n->next = head;
		head = n;

		c = s / 10;

		head1 = head1->next;

	}

	while (head2 != NULL) {

		int d2 = head2->val;

		int s = d2 + c;

		ListNode* n = new ListNode(s % 10);
		n->next = head;
		head = n;

		c = s / 10;

		head2 = head2->next;

	}

	if (c == 1) {

		ListNode* n = new ListNode(1);
		n->next = head;
		head = n;

	}

	return head;

}

ListNode* sumOfLinkedListSimplified(ListNode* head1, ListNode* head2) {

	ListNode* head = NULL;
	int c = 0;

	while (head1 != NULL || head2 != NULL || c == 1) {

		int d1 = head1 != NULL ? head1->val : 0;
		int d2 = head2 != NULL ? head2->val : 0;

		int s = d1 + d2 + c;

		ListNode* n = new ListNode(s % 10);
		n->next = head;
		head = n;

		c = s / 10;

		head1 = head1 != NULL ? head1->next : NULL;
		head2 = head2 != NULL ? head2->next : NULL;

	}

	return head;

}


int main() {

	ListNode* head1 = NULL;

	insertAtHead(head1, 9);
	insertAtHead(head1, 9);
	insertAtHead(head1, 9);

	printLinkedList(head1);

	ListNode* head2 = NULL;

	insertAtHead(head2, 9);
	insertAtHead(head2, 9);
	insertAtHead(head2, 9);
	insertAtHead(head2, 9);
	insertAtHead(head2, 9);

	printLinkedList(head2);

	ListNode* head = sumOfLinkedList(head1, head2);

	printLinkedList(head);

	head = sumOfLinkedListSimplified(head1, head2);

	printLinkedList(head);

	return 0;
}