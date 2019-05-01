#include <stdio.h>
#include <stdlib.h>

#include "nodes.h"

void menu() {
	printf("------------------------\n");
	printf("-1. Quit.\n");
	printf("0.  Print list to output file.\n");
	printf("1.  Add node to the start of the list.\n");
	printf("2.  Add node to the end of the list.\n");
	printf("3.  Add node after specified node (index).\n");
	printf("4.  Add node before specified node (index).\n");
	printf("5.  Delete the first node.\n");
	printf("6.  Delete the last node.\n");
	printf("7.  Delete the specified node (index).\n");
	printf("8.  Delete the entire list.\n");
	printf("9.  Print list size.\n");
	printf("10. Print the entire list.\n");
	printf("11. Find node by index.\n");
	printf("12. Find node by data.\n");
	printf("------------------------\n");
};
