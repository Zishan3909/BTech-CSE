//write a  program using linked list using all functions.
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node *first = NULL;

void addb(int item)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    newNode->data = item;
    newNode->next = NULL;
    if (first == NULL) {
        first = newNode;
    } else {
        struct Node *temp = first;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void display(void)
{
    struct Node *temp = first;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void freeList(void)
{
    struct Node *temp;

    while (first != NULL) {
        temp = first;
        first = first->next;
        free(temp);
    }
}

int main(void)
{
    addb(10);
    addb(20);
    addb(30);

    printf("Linked list: ");
    display();

    freeList();
    return 0;
}