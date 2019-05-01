#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

void printNode(node* start, node* target, FILE *f) {
	node* current = start;
	char number[255];
	
	while (current->next != target) {
		current= current->next;		
	};	
	
	current = current->next;
	itoa(current->data, number, 10);
	fputs(number, f);
	fputs("\n", f);
};
