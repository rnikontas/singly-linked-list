#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

node* insert_before(node* start, int data, node* target) {
	if ((target == NULL) || (start == NULL)) {
		return NULL;
	};
	
	if (start == target) {
		start = insert(start, data);
		return start;
	};
	
	node* current = start;
	while (current != NULL) {
		if (current->next == target)
			break;
		current = current->next;
	};
	
	if (current != NULL) {
		node* new_node = create(data, current->next);
		current->next = new_node;
		return start;
	} else {
		return NULL;
	};
	
};
