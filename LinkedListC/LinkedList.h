
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/*
	This header file is where the linked list will be implemented in
	the functions I will implement are:
		
		traversal - simply an iterator
		insertion - insert a new node at the beginning or end of the list, or 
		deletion
		search
		sort
		copy (maybe)
		print
*/

//function definitions:


void addFront(void* addMe);

void addBack(void* addMe);
void* replace(void* replaceMe, int index);


void* removeFront();
void* removeBack();
void* deleteAt(void* removeMe);



bool search(void* findMe);

void sort();

void printList();

//struct definition:

struct Node {
	void* data;
	struct Node *next;
	struct Node *prev;
};

void init();



