#include "LinkedList.h"
#include <stdbool.h>

struct Node* dummy;
struct Node* head;
struct Node* tail;
/*
* init
* this method will initialize the dummy node, called once by the program
* this method also initializes the linked list 
*/
void init() {
	dummy = (struct Node*)malloc(sizeof(struct Node*));

	//head = (struct Node*)malloc(sizeof(struct Node));
	//tail = (struct Node*)malloc(sizeof(struct Node));

	dummy->next = &dummy;
	dummy->prev = &dummy;
	dummy->data = "dummy node";
}

/*
* addFront
* 
* this method will add a new node to the head of the linked list
* 
*/
void addFront(void* addMe)
{
	/*
	if (search(addMe)) {
		//do nothing
	}
	else {
	*/
		//step 1 create new node
		struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

		//step 2 initialize node
		newNode->data = addMe;

		//step 3 pointer placement

		dummy->next->prev = newNode;
		newNode->next = dummy;
		dummy->next = newNode;
		newNode->prev = dummy;



}



void addBack(void* addMe)
{

}

void* replace(void* replaceMe, int index)
{
	return NULL;
}

void* removeFront()
{
	return NULL;
}

void* removeBack()
{
	return NULL;
}

void* deleteAt(void* removeMe)
{
	return NULL;
}

void sort()
{
}

void printList()
{
	
		


}

bool search(void* findMe)
{
	bool isFound = false;

	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp = dummy->next;
	temp->data = dummy->next->data;


	while (temp != dummy) {
		if (strcmp(temp->data, findMe)==0) {
			printf("found, %s", findMe);
			isFound = true;
		}
		temp = temp->next;
	}
	
	free(temp);

	return isFound;
}



