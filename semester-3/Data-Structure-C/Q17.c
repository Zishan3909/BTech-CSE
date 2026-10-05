//Write a c program for Insert at beginning
//Insert at end
//Delete from beginning
//Delete from end
//Display
//using linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertBegin()
{
    struct Node *newNode;

    newNode = malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d", &newNode->data);

    newNode->next = head;
    head = newNode;
}

void insertEnd()
{
    struct Node *newNode, *temp;

    newNode = malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    if (head == NULL)
        head = newNode;
    else
    {
        temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }
}


void deleteBegin()
{
    struct Node *temp;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    temp = head;
    head = head->next;
    free(temp);
}


void deleteEnd()
{
    struct Node *temp;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }

    temp = head;

    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
}


void display()
{
    struct Node *temp = head;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n1.Insert Begin");
        printf("\n2.Insert End");
        printf("\n3.Delete Begin");
        printf("\n4.Delete End");
        printf("\n5.Display");
        printf("\n6.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: insertBegin(); break;
            case 2: insertEnd(); break;
            case 3: deleteBegin(); break;
            case 4: deleteEnd(); break;
            case 5: display(); break;
            case 6: break;
            default: printf("Wrong choice\n");
        }

    } while (choice != 6);

    return 0;
}

