#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

node* search(node* start, int index) {
	node* current = start;
	int i = 1;
	int limit = count(start);
	
	if ((index > limit) || (index < 0)) {
		return NULL;
	};
	
	for (i = 0; i < (index-1); i++) {
		current = current->next;
	};
	
	return current;
};
