#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

void add(node* start, int data) {
	node* current = start;
	if (current->next == NULL) {
		node* new_node = create(data, NULL);
		current->next = new_node;	
	} else {
		add(current->next, data);
	};	
};
