#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

node* insert(node* start, int data) {
	node* new_node = create(data, start);
	start = new_node;
	return start;	
};
