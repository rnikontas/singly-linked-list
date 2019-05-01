#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

node* insert_after(node* start, int data, node* target) {
	node* current = start;
	while (current != target) {
		current = current->next;
	};
	
	if (current != NULL) {
		node* new_node = create(data, current->next);
		current->next = new_node;
		return start;
	} else {
		return NULL;
	}
};
