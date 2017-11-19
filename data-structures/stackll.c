#include <stdio.h>
#include <stdlib.h>

void push(int value);
void pop();
void display();

struct node {
	int data;
	struct node *next;
}*top = NULL, *temp;

int main()
{
	int choice, val;
	printf("***Stack Operations***\n");
	printf("1. Push.\n");
	printf("2. Pop.\n");
	printf("3. Display.\n");
	printf("4. Exit.\n");

	while(1) {
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch(choice) {
			case 1: printf("Enter the number you wish to push.\n");
				scanf("%d", &val);
				push(val);
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(0);
			case 5: printf("Invalid choice. Please try again.\n");
				break;
		}
	}
	return 0;
}

void push(int value)
{
	temp = (struct node*)malloc(sizeof(struct node));

	temp->data = value;
	temp->next = top;
	top = temp;
}

void pop()
{
	if(top == NULL) {
		printf("Stack Underflow.\n");
		return;
	}

	temp = top;
	top = temp->next;
	printf("Deleted element is %d\n", temp->data);
	free(temp);
}

void display()
{
	if(top == NULL) {
		printf("Queue is empty.\n");
		return;
	}

	temp = top;
	printf("Stack is:\n");
	while(temp != NULL) {
		printf("%d\n", temp->data);
		temp = temp->next;
	}
	free(temp);
}

