#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "nodes.h"

// Main driver program to test and showcase singly-linked list functionality. 

int main() {
	char in[255];
	char out[255];

	printf("Please enter input filename:\n");
	scanf("%s", &in);
	printf("Please enter output filename:\n");
	scanf("%s", &out);
	FILE *fr = fopen(in, "r");
	FILE *fw = fopen(out, "w");
	if (fr == NULL) {
		perror("Input file does not exist.\n");
		return (-1);
	};
	if (fw == NULL) {
		perror("Output file cannot be created.\n");
		return (-1);
	};

	char *buffer = malloc(255*sizeof(char));
	int data;
	int command;
	int k;
	int alt;
	int m = 1;
	node* start = NULL;
	node* end = NULL;
	node* pointer;	
	
	while ( fgets(buffer, 255, fr) != NULL) {
		data = strtol(buffer, NULL, 10);
		if (start == NULL) {
			start = insert(start, data);
		} else {
			add(start, data);
		};
	};	
	
	free(buffer);
	printf("------------------------\n");
	list(start);
	
	while(m) {
		menu();
		scanf("%d", &command);
		switch(command) {
			case -1:													// Baigti programa
				m = 0;
				break;
			case 0:														// Irasyti sarasa i rezultatu faila ir baigti
				printList(start, fw);
				printf("List written to output file\n");
				m = 0;
				break;
			case 1:														// Iterpti elementa saraso pradzioje
				printf("Input data:\n");
				scanf("%d", &data);
				start = insert(start, data);
				break;	
			case 2:														// Iterpti elementa saraso pabaigoje
				printf("Input data:\n");
				scanf("%d", &data);
				add(start, data);
				break;
			case 3:														// Iterpti elementa po k-tojo elemento
				printf("Input node index to insert after:\n");
				scanf("%d", &k);
				printf("Input data:\n");
				scanf("%d", &data);
				pointer = search(start, k);
				if (pointer == NULL) {
					printf("Node does not exist\n");
					break;
				} else {
					start = insert_after(start, data, pointer);
					break; 	
				};
			case 4:														// Iterpti elementa pries k-taji elementa
				printf("Input node index to insert before:\n");
				scanf("%d", &k);
				printf("Input data:\n");
				scanf("%d", &data);
				pointer = search(start, k);
				if (pointer == NULL) {
					printf("Node does not exist\n");
					break;
				} else {
					start = insert_before(start, data, pointer);
					break; 	
				};
			case 5:														// Istrinti 1-aji elementa
				start = delete_start(start);
				printf("First node removed.\n");
				break;
			case 6:														// Istrinti paskutiniji elementa
				start = delete_end(start);
				printf("Last node removed. \n");
				break;
			case 7:														// Istrinti k-taji elementa
				printf("Input node index to delete: \n");
				scanf("%d", &k);
				pointer = search(start, k);
				if (pointer == NULL) {
					printf("Node does not exist\n");
					break;
				} else {
					start = delete_node(start, pointer);
					break;
				};
			case 8:														// Istrinti visa sarasa
				nuke(start);
				start = NULL;
				printf("List deleted\n");
				break;
			case 9:														// Isvesti elementu skaiciu
				printf("List size: %d\n", count(start));
				break;
			case 10:													// Atspausdinti visa sarasa
				list(start);
				break;
			case 11:													// Rasti elementa pagal pozicija sarase
				printf("Input node index to find:\n");
				scanf("%d", &k);
				pointer = search(start, k);
				if (pointer == NULL) {
					printf("Node does not exist\n");
					break;
				} else {
					printf("Node: %d | Data: %d\n", k, pointer->data);
					printf("Write data to output file?: (1/0)\n");
					scanf("%d", &alt);
					if (alt == 1) {
						printNode(start, pointer, fw);
						break;
					} else {
						break;
					};
				};
			case 12:													// Rasti elementa pagal duomenis
				printf("Input data to search for: \n");
				scanf("%d", &data);
				pointer = search_by_data(start, data);
				if (pointer == NULL) {
					printf("Node with such data does not exist\n");
					break;
				} else {
					printf("Node: %d | Data: %d\n", index_search_by_data(start, data), pointer->data);
					printf("Write data to output file?: (1/0)\n");
					scanf("%d", &alt);
					if (alt == 1) {
						printNode(start, pointer, fw);
						break;
					} else {
						break;
					};
				};
			default:
				printf("Unknown command.\n");	
		};
	};
	
	nuke(start);
	start = NULL;
	fclose(fr);
	fclose(fw);
	return 0;
}
