#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void push(int value);
int pop();
void display();

int top = -1, stack[MAX];

int main()
{
	int choice;
	int val;
	printf("***Stack operations***\n");
	printf("1. Push\n");
	printf("2. Pop\n");
	printf("3. Display\n");
	printf("4. Exit\n");

	while(1) {
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch(choice) {
			case 1: printf("Enter the number you want to push into stack: ");
				scanf("%d", &val);
				push(val);
				break;
			case 2: val = pop();
				if(val != -1)
					printf("The deleted element is %d.\n", val);
				break;
			case 3: display();
				break;
			case 4: exit(0);
			case 5: printf("Invalid choice. Try again\n");
				break;
		}
	}

	return 0;
}

void push(int value)
{
	if(top == MAX-1)
		printf("Stack Overflow.\n");
	else
		stack[++top] = value;
}

int pop()
{
	int value = -1;
	if(top == -1) {
		printf("Stack Underflow.\n");
		return -1;
	}
	else {
		value = stack[top--];
		return value;
	}
}

void display()
{
	int i;
	if(top == -1) 
		printf("Stack is empty.\n");
	else {
		printf("Stack is:\n");
		for(i = top; i >= 0; i--)
			printf("%d\n", stack[i]);
	}
}
