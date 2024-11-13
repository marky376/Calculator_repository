#include <stdio.h>
#include <stdlib.h>

/* The structure of a Node*/
struct Node {
	int data;
	struct Node* next;
};

/* Function to create a new node*/
struct Node* createNode(int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

/* Function to print the list*/
void printList(struct Node* head) {
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

int main(void)
{
	struct Node* head = createNode(1);


	head->next = createNode(2);
	head->next->next = createNode(3);


	printList(head);

	struct Node* temp;
	while (head != NULL) {
		temp = head;
		head = head->next;
		free(temp);
	}

	return 0;
}
