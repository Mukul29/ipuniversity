// Write a program to perform operations on a circular linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *end = NULL, *temp, *temp1;
int i, count = 0;

void insert_front(int);
void insert_end(int);
void insert(int, int);
void delete_front();
void delete_end();
void _delete(int);
void display();

void main()
{
    int choice, x, pos;

    printf("---------------OPERATIONS---------------");
    printf("\n1.Insert element at the front");
    printf("\n2.Insert element at the end");
    printf("\n3.Insert element at desired position");
    printf("\n4.Delete element from the front");
    printf("\n5.Delete element from the end");
    printf("\n6.Delete element from desired position");
    printf("\n7.Display the list");
    printf("\n8.EXIT");
    printf("\n---------------------------------------");

    while(1)
    {
        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 : printf("Enter element to insert : ");
                     scanf("%d", &x);
                     insert_front(x);
                     break;

            case 2 : printf("Enter element to insert : ");
                     scanf("%d", &x);
                     insert_end(x);
                     break;

            case 3 : printf("Enter position for insertion : ");
                     scanf("%d", &pos);

                     if(pos > (count+1))
                        printf("ERROR! position is out of list");

                     else
                     {
                        printf("Enter element to insert : ");
                        scanf("%d", &x);

                        if(pos == 1)
                            insert_front(x);

                        else if(pos == (count+1))
                            insert_end(x);

                        else
                            insert(x, pos);
                     }
                     break;

            case 4 : if(end == NULL)
                        printf("ERROR! List is empty");

                     else
                         delete_front();

                     break;

            case 5 : if(end == NULL)
                        printf("ERROR! List is empty");

                     else
                        delete_end();

                     break;

            case 6 : printf("Enter position to perform deletion : ");
                     scanf("%d", &pos);

                     if(end == NULL || pos > count)
                        printf("ERROR! List is empty or Invalid position");

                     else if(pos == 1)
                        delete_front();

                     else if(pos == count)
                        delete_end();

                     else
                        _delete(pos);

                     break;

            case 7 : if(end == NULL)
                        printf("ERROR! List is empty");

                     else
                        display();

                     break;

            case 8 : exit(0);

            default : printf("INVALID CHOICE!");
        }
    }
}

void insert_front(int x)
{
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;

    if(end == NULL)
        end = temp->next = temp;
    else
    {
        temp->next = end->next;
        end->next = temp;
    }
    count++;
    printf("OKAY");
}

void insert_end(int x)
{
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;

    if(end == NULL)
        end = temp->next = temp;
    else
    {
        temp->next = end->next;
        end->next = temp;
        end = temp;
    }
    count++;
    printf("OKAY");
}

void insert(int x, int pos)
{
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp1 = end;

    for(i = 1; i < pos; i++)
        temp1 = temp1->next;

    temp->next = temp1->next;
    temp1->next = temp;
    count++;
    printf("OKAY");
}

void delete_front()
{
    temp = end->next;

    if(end == temp)
        end = NULL;
    else
        end->next = temp->next;

    count--;
    printf("OKAY and deleted element is %d", temp->data);
    free(temp);
}

void delete_end()
{
    temp = end;

    if(end == temp->next)
        end = NULL;
    else
    {
        for(i = 1; i < count; i++)
            temp = temp->next;

        end = temp;
        temp = temp->next;
        end->next = temp->next;
    }
    count--;
    printf("OKAY and deleted element is %d", temp->data);
    free(temp);
}

void _delete(int pos)
{
    temp1 = end;

    for(i = 1; i < pos; i++)
        temp1 = temp1->next;

    temp = temp1->next;
    temp1->next = temp->next;
    count--;
    printf("OKAY and deleted element is %d", temp->data);
    free(temp);
}

void display()
{
    temp = end->next;

    printf("LIST : ");
    for(i = 0; i < count; i++)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\nList contains %d elements", count);
}



