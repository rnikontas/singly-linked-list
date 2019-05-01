#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

node* nuke(node* start) {
	node* current;
	node* temp;
	
	if (start != NULL) {
		current = start->next;
		start->next = NULL;
		while (current != NULL) {
			temp = current->next;
			free(current);
			current = temp;
		};
	};
	
	return NULL;
}; 
