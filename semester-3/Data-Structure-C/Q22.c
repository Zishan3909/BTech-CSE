//Write a program that will reverse a linked list only by traversing it once and without using  extra space.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *createNode(int data) {
    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL) {
        return NULL;
    }

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node *reverseList(struct Node *head) {
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

void freeList(struct Node *head) {
    while (head != NULL) {
        struct Node *next = head->next;
        free(head);
        head = next;
    }
}

int main(void) {
    struct Node *head = NULL;
    struct Node *tail = NULL;
    int choice;

    while (1) {
        int value;

        printf("Press:\n1 to insert node\n2 to exit\n");
        if (scanf("%d", &choice) != 1) {
            freeList(head);
            return 1;
        }

        if (choice == 2) {
            break;
        }
        if (choice != 1) {
            printf("Invalid choice\n");
            continue;
        }

        printf("Enter data: ");
        if (scanf("%d", &value) != 1) {
            freeList(head);
            return 1;
        }

        struct Node *newNode = createNode(value);
        if (newNode == NULL) {
            fprintf(stderr, "Unable to allocate memory for a node\n");
            freeList(head);
            return 1;
        }

        if (head == NULL) {
            head = newNode;
        } else {
            tail->next = newNode;
        }
        tail = newNode;
    }

    printf("Original Linked List :");
    for (struct Node *current = head; current != NULL; current = current->next) {
        printf(" %d", current->data);
    }
    printf("\n");

    head = reverseList(head);

    printf("Reversed Linked List :");
    for (struct Node *current = head; current != NULL; current = current->next) {
        printf(" %d", current->data);
    }
    printf("\n");

    freeList(head);
    return 0;
}
