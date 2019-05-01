#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

node* delete_start(node* start) {
	if (start == NULL) {
		return NULL;
	};
	
	node* first = start;
	start = start->next;
	first->next = NULL;
	if (first == start) {
		start = NULL;
	};
	free(first);
	return start;
};
