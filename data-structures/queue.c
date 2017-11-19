#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void push(int value);
int pop();
void display();

int queue[MAX], front = -1, rear = -1;

int main()
{
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
			case 2: val = pop();
				if(val != -1)
					printf("The deleted element is: %d\n", val);
				break;
			case 3: display();
				break;
			case 4: exit(0);
			case 5: printf("Invalid choice, please try again.\n");
				break;
		}
	}

	return 0;
}

void push(int value)
{
	if(rear == (MAX - 1))
		printf("Queue Overflow.\n");
	else {
		if(front == -1)
			front = 0;
		queue[++rear] = value;
	}
}

int pop()
{
	int value = -1;
	if(front == -1) {
		printf("Queue Underflow.\n");
	}
	else {
		if(front == rear)
			front = rear = -1;
		else {
			value = queue[front++];
			return value;
		}
	}
	return -1;
}

void display()
{
	int i;
	if(front == -1)
		printf("Queue is empty.\n");
	else {
		for(i = front; i <= rear; i++) {
			printf("%d ", queue[i]);
		}
		printf("\n");
	}
}

