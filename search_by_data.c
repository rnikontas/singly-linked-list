#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

node* search_by_data(node* start, int data) {
	node* current = start;
	while (current != NULL) {
		if (current->data == data)
			return current;
		current = current->next;
	}
	return NULL;
};
