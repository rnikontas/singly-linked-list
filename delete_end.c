#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

node* delete_end(node* start) {
	if (start == NULL) {
		return NULL;
	};
	
	node* current = start;
	node* target = NULL;
	while(current->next != NULL) {
		target = current;
		current = current->next;
	};
	if (target != NULL) {
		target->next = NULL;
	};
	
	if (current == start)
		start = NULL;
	
	free(current);
	return start;
};
