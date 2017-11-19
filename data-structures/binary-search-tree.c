// Write a program to implement binary search tree

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
} *root = NULL, *newnode, *temp;

void Insert(int x)
{
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->left = newnode->right = NULL;

    if(root == NULL)
    {
        root = newnode;
        return;
    }

    temp = root;
    while(1)
    {
        if(x <= temp->data)
        {
            if(temp->left == NULL)
            {
                temp->left = newnode;
                break;
            }
            temp = temp->left;
        }

        else
        {
            if(temp->right == NULL)
            {
                temp->right = newnode;
                break;
            }
            temp = temp->right;
        }
    }
}

void Inorder_traversal(struct node *temp1)
{
    if(temp1 == NULL)
        return;

    Inorder_traversal(temp1->left);

    printf("%d\t", temp1->data);

    Inorder_traversal(temp1->right);
}

void main()
{
    int x, n, i, choice;

    printf("----------------OPERATIONS------------------");
    printf("\n1. Insertion in BST");
    printf("\n2. Inorder traversal of BST");
    printf("\n3. EXIT");
    printf("\n--------------------------------------------");

    while(1)
    {
        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1 : printf("\nEnter the number of elements to enter : ");
                     scanf("%d", &n);
                     printf("Enter the elements one by one with space after each element\n");
                     for(i = 0; i < n; i++)
                     {
                        scanf("%d", &x);
			getchar();
                        Insert(x);
                     }
                     printf("Done");
                     break;

            case 2 : if(root == NULL)
                        printf("Tree is empty!");
                     else
                     {
                        printf("\nLIST : ");
                        Inorder_traversal(root);
                     }
                     break;

            case 3 : exit(0);

            default : printf("Invalid choice!");
        }
    }
}
