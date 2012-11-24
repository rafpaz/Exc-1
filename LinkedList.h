#include <stdio.h>

typedef int ListItem;

class ListNode {

	// The data stored in this node.
	ListItem item;
	// Pointer to the next item in the list.
	ListNode* next;

public:

	// Constructor.
	ListNode(ListItem it) { item = it; next = NULL; }

	// Returns the data item stored in this node.
	ListItem getItem(void) { return item; }
	
	// Returns the pointer to the next node in the list.
	ListNode* getNext(void) { return next; }
	// Sets the pointer to the next node in the list.
	void setNext(ListNode* n) { next = n; }

	// Insert the node '*nd' in the list, after the current node.
	void insertAfter(ListNode* nd);
	// Delete the subsequent node in the list.
	void deleteAfter(void);
};


class LinkedList {

	ListNode* head;

public:
	
	// Constructor.
	LinkedList(ListNode* nd = NULL) { head=nd; }
	// Destructor.
	~LinkedList(); 

	// Clears the list.
	void makeEmpty(void);
	// Returns 1 if the list is empty, and 0 othewise.
	int isEmpty(void);

	// Returns the first item in the list, by reference.
	// The return value is used to indicate whether it was succesful 
	// (e.g. whether the list is not empty).
	int first(ListItem&);
	// Similar to 'first' but returns the last item in the list.
	int last(ListItem&);

	// Returns a poiter to the first node in the list containing item 'it'.
	// Returns NULL if 'it' was not found.
	ListNode* find(ListItem it);
	// Returns a poiter to the predecessor of the first node in the list containing item 'it'.
	// Returns NULL if 'it' was not found, or if it is the head of the list.
	ListNode* findPred(ListItem it);
	
	// Insert the new item `newItem' as the head of the list.
	void insertFirst(ListItem newItem);
	// Insert the new item `newItem' after the existing item `it'.
	// If `it' is not in the list, do nothing and return '0'.
	// Otherwise insert the item and return '1'.
	int insertAfter(ListItem it, ListItem newItem);
	
	// Remove the first item from the list.
	void deleteFirst(void);
	// Remove item `it' from the list.
	void deleteItem(ListItem it);

	// Print the items in the list in order.
	void print(void);

	// Reverses the order of items in the list.
	void reverse(void);
};