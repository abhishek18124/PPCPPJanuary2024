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

// time : O(n)
// space: O(1)

void removeDuplicates(ListNode* head) {

	if (head == NULL) {
		return;
	}

	ListNode* prev = head;
	ListNode* cur = head->next;

	while (cur != NULL) {

		if (cur->val != prev->val) {

			// track the cur node

			prev->next = cur;
			prev = cur;

		}

		cur = cur->next;

	}

	prev->next = NULL;

}

int main() {

	ListNode* head = NULL;

	insertAtHead(head, 40);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 30);
	insertAtHead(head, 10);
	insertAtHead(head, 10);

	printLinkedList(head);

	removeDuplicates(head);

	printLinkedList(head);

	return 0;
}