#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
}*front, *rear, *temp;

void push(int value);
void pop();
void display();

int main()
{
	front = rear = NULL;
	int choice, val;
	printf("***Queue Operations***\n");
	printf("1. Push.\n");
	printf("2. Pop.\n");
	printf("3. Display.\n");
	printf("4. Exit.\n");

	while(1) {
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch(choice) {
			case 1: printf("Enter the number you wish to push: ");
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
	free(temp);
	return 0;
}

void push(int value)
{
	temp = (struct node*)malloc(sizeof(struct node));
	temp->next = NULL;
	temp->data = value;

	if(front == NULL) {
		front = temp;
		rear = temp;
	}
	else {
		rear->next = temp;
		rear = temp;
	}
}

void pop()
{
	temp = front;
	if(temp == NULL)
		printf("Queue Underflow.\n");
	else {
		printf("%d is deleted.\n", temp->data);
		temp = temp->next;
		front = temp;
	}
}

void display()
{
	temp = front;
	if(temp == NULL)
		printf("Queue is empty.\n");
	else {
		while(temp != NULL) {
			printf("%d ", temp->data);
			temp = temp->next;
		}
		printf("\n");
	}
}
