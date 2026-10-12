// Question: Create a doubly linked list and traverse it from the head.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main(void)
{
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));
    struct Node *fourth = malloc(sizeof(struct Node));

    if (head == NULL || second == NULL || third == NULL || fourth == NULL)
    {
        fprintf(stderr, "Failed to allocate memory for the list.\n");
        free(head);
        free(second);
        free(third);
        free(fourth);
        return EXIT_FAILURE;
    }

    head->prev = NULL;
    head->data = 7;
    head->next = second;

    second->prev = head;
    second->data = 14;
    second->next = third;

    third->prev = second;
    third->data = 21;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 28;
    fourth->next = NULL;

    linkedlisttraversal(head);

    free(fourth);
    free(third);
    free(second);
    free(head);
    return EXIT_SUCCESS;
}