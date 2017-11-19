// Write a program to perform operations on a double ended linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *temp, *temp1, *head = NULL;

int i, count = 0;

void insert_front(int x)
{
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->prev = NULL;
    temp->next = head;
    if(head != NULL)
        head->prev = temp;
    head = temp;
    count++;
    printf("DONE!");
}

void insert_end(int x)
{
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;

    temp1 = head;
    for(i = 1; i < count; i++)
        temp1 = temp1->next;

    if(head != NULL)
        temp1->next = temp;
    temp->prev = temp1;

    count++;
    printf("DONE!");
}

void delete_front()
{
    if(head == NULL)
    {
        printf("ERROR! List is Empty");
        return;
    }
    temp = head;
    head = head->next;
    if(head != NULL)
        head->prev = NULL;
    count--;
    free(temp);
    printf("DONE!");
}

void delete_end()
{
    if(head == NULL)
    {
        printf("ERROR! List is Empty");
        return;
    }
    temp = head;
    if(head->next == NULL)
        head = NULL;

    for(i = 1; i < count; i++)
        temp = temp->next;

    if(head != NULL)
        (temp->prev)->next = NULL;
    count--;
    free(temp);
    printf("DONE!");
}

void display()
{
    if(head == NULL)
        printf("ERROR! List is Empty");

    else
    {
        temp = head;
        printf("LIST : ");
        while(temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("\nList contains %d elements", count);
    }
}

void rev_display()
{
    if(head == NULL)
        printf("ERROR! List is Empty");

    else
    {
        temp = head;
        while(temp->next != NULL)
            temp = temp->next;

        printf("LIST : ");
        while(temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->prev;
        }
        printf("\nList contains %d elements", count);
    }
}

void main()
{
    int x, choice;

    printf("----------------OPERATIONS-----------------");
    printf("\n1. Insert at front");
    printf("\n2. Insert at the end");
    printf("\n3. Delete from front");
    printf("\n4. Delete from the end");
    printf("\n5. Display");
    printf("\n6. Reverse display");
    printf("\n7. Exit");
    printf("\n------------------------------------------\n");

    while(1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 : printf("Enter the element : ");
                     scanf("%d", &x);
                     insert_front(x);
                     break;

            case 2 : printf("Enter the element : ");
                     scanf("%d", &x);
                     insert_end(x);
                     break;

            case 3 : delete_front();
                     break;

            case 4 : delete_end();
                     break;

            case 5 : display();
                     break;

            case 6 : rev_display();
                     break;

            case 7 : exit(0);

            default : printf("INVALID CHOICE!");
        }
    }
}
