#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

node* create(int data, node* next) {
	node* new_node = (node*)malloc(sizeof(node));
	new_node->data = data;
	new_node->next = next;
	return new_node;	
};
