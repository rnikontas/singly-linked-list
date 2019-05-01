#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

int count(node* start) {
	node* current = start;
	int c = 0;
	while (current != NULL) {
		c++;
		current = current->next;
	}
	return c;
};
