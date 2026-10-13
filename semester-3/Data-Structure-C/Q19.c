//write a program to delete a node from the doubly linkedlist pointer by the pointer start and the deleted node should be smaller than its left node as well as right node.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void deleteNode(struct Node** start) {
    struct Node* current = *start;
    while (current != NULL) {
        if (current->prev != NULL && current->next != NULL) {
            if (current->data < current->prev->data && current->data < current->next->data) {
                struct Node* temp = current;
                current = current->next;
                if (temp->prev != NULL) {
                    temp->prev->next = temp->next;
                }
                if (temp->next != NULL) {
                    temp->next->prev = temp->prev;
                }
                free(temp);
            } else {
                current = current->next;
            }
        } else {
            current = current->next;
        }
    }
}
int main() {
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));
    struct Node* fourth = malloc(sizeof(struct Node));

    if (head == NULL || second == NULL || third == NULL || fourth == NULL) {
        fprintf(stderr, "Failed to allocate memory for the list.\n");
        free(head);
        free(second);
        free(third);
        free(fourth);
        return EXIT_FAILURE;
    }

    head->prev = NULL;
    head->data = 10;
    head->next = second;

    second->prev = head;
    second->data = 5; // This node should be deleted
    second->next = third;

    third->prev = second;
    third->data = 15;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 20;
    fourth->next = NULL;

    printf("Before deletion:\n");
    struct Node* temp = head;
    while (temp != NULL) {
        printf("Element: %d\n", temp->data);
        temp = temp->next;
    }

    deleteNode(&head);

    printf("\nAfter deletion:\n");
    temp = head;
    while (temp != NULL) {
        printf("Element: %d\n", temp->data);
        temp = temp->next;
    }

    // Free remaining nodes
    while (head != NULL) {
        struct Node* nextNode = head->next;
        free(head);
        head = nextNode;
    }

    return EXIT_SUCCESS;
}