#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

node* updateEnd(node* start) {
	node* current = start;
	while (current->next != NULL) {
		current = current->next;
	};
	
	return current;
};
