#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

int index_search_by_data(node* start, int data) {
	node* current = start;
	int index = 1;
	while (current != NULL) {
		if (current->data == data)
			return index;
		index++;
		current = current->next;
	}
	return 0;
};
