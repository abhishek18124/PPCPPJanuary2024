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

ListNode* getMidPoint(ListNode* head) {
	if (!head) { // head == NULL
		return head;
	}

	ListNode* slow = head;
	ListNode* fast = head->next;

	while (fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;
}


ListNode* computeMidPoint(ListNode* head) {

	if (head == NULL) {
		// LinkedList is empty
		return head;
	}

	ListNode* slow = head;
	ListNode* fast = head->next;

	while (fast != NULL and fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}

	// slow is pointing to the midPoint
	return slow;

}

ListNode* mergeSortedLinkedList(ListNode* head1, ListNode* head2) {

	// base case

	if (head1 == NULL) {
		return head2;
	}

	if (head2 == NULL) {
		return head1;
	}

	// recursive case

	ListNode* head;

	if (head1->val < head2->val) {
		head = head1;
		ListNode* headFromMyFriend = mergeSortedLinkedList(head1->next, head2);
		head->next = headFromMyFriend;
	} else {
		head = head2;
		ListNode* headFromMyFriend = mergeSortedLinkedList(head1, head2->next);
		head->next = headFromMyFriend;
	}

	return head;

}


ListNode* mergeSort(ListNode* head) {

	// base case

	if (head == NULL || head->next == NULL) {
		return head;
	}

	// recursive case

	// 1. divide the linkedList around the midPoint

	ListNode* mid =	computeMidPoint(head);
	ListNode* head2 = mid->next;
	mid->next = NULL;

	// 2. recursively sort the two subLists
	head = mergeSort(head);
	head2 = mergeSort(head2);

	// 3. merge the two sorted subLists such that the merged list is sorted
	return mergeSortedLinkedList(head, head2);

}

int main() {

	ListNode* head = NULL;

	insertAtHead(head, 10);
	insertAtHead(head, 20);
	insertAtHead(head, 30);
	insertAtHead(head, 40);
	insertAtHead(head, 50);

	printLinkedList(head);

	head = mergeSort(head);

	printLinkedList(head);

	return 0;
}