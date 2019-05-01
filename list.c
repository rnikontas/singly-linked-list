#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

void list(node* start) {
	if (start == NULL) {
		printf("Sarasas tuscias.\n");
		return;
	};
	node* current = start;
	int i = 1;
	printf("Node: %d | Data: %d\n", i, current->data);
	while (current->next != NULL) {
		current = current->next;
		i++;
		printf("Node: %d | Data: %d\n", i, current->data);
	};
	
};
