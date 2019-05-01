#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

void printList(node* start, FILE *f) {
	node* current = start;	
	char number[255];
	
	if (start == NULL) {
		return;
	};
	
	while (current->next != NULL) {
		itoa(current->data, number, 10);
		fputs(number, f);
		fputs("\n", f);
		current = current->next;	
	};	
	
	itoa(current->data, number, 10);
	fputs(number, f);
	fputs("\n", f);
};
