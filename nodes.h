#include <stdio.h>
#include <stdlib.h>
// Ramojus Nikontas, PS 4 gr.
// Singly-Linked List
// Vilnius University Procedural Programming class final task.

typedef struct node {
	int data;
	struct node *next;
} node;

node* create(int data, node* next);							// Allocates memory for a new node. Only called from within other insert functions.
node* insert(node* start, int data);						// Inserts a node at the start of the list.
node* insert_after(node* start, int data, node* target);	// Inserts a node after the specified node.
node* insert_before(node* start, int data, node* target);   // Inserts a node before the specified node.
void add(node* start, int data);							// Adds a node to the end of the list.
node* updateEnd(node* start);								// Obsolete.
int count(node* start);										// Returns the number of nodes in the list.
node* search_by_data(node* start, int data);				// Returns the first node with the specified data.
int index_search_by_data(node* start, int data);			// Returns the index of the first node with the specified data.
node* search(node* start, int index);						// Returns the specified index node.
node* delete_start(node* start);							// Deletes the first node.
node* delete_end(node* start);								// Deletes the last node.
node* delete_node(node* start, node* target);				// Deletes the specified node.
node* nuke(node* start);									// Deletes the entire list.
void list(node* start);										// Prints the entire list to the console.
void menu();												// Prints the menu to the console.
void printList(node* start, FILE *f);						// Prints the entire list to a file.
void printNode(node* start, node* target, FILE *f);			// Prints the specified node to a file.
