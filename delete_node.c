#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

node* delete_node(node* start, node* target) {
	if (target == start) {
		start = delete_start(start);
		return start;
	};
	
	if (target->next == NULL) {
		start = delete_end(start);
		return start;
	};
	
	node* current = start;
	while (current != NULL) {
		if (current->next == target) {
			break;
		};
		current = current->next;
	};
	
	if (current != NULL) {
		node* temp = current->next;
		current->next = temp->next;
		temp->next = NULL;
		free(temp);
	};
	
	return start;	
};
