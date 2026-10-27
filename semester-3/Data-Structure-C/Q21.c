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

struct Node *findNthFromEnd(struct Node *head, int n) {
    struct Node *fast = head;
    struct Node *slow = head;

    for (int i = 0; i < n; i++) {
        if (fast == NULL) {
            return NULL;
        }
        fast = fast->next;
    }

    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    return slow;
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

    int n;
    printf("Enter value n: ");
    if (scanf("%d", &n) != 1) {
        freeList(head);
        return 1;
    }

    printf("Linked List :");
    for (struct Node *current = head; current != NULL; current = current->next) {
        printf(" %d", current->data);
    }
    printf("\n");

    struct Node *result = n > 0 ? findNthFromEnd(head, n) : NULL;
    if (result == NULL) {
        printf("Invalid position\n");
    } else {
        printf("Value at position %d from end : %d\n", n, result->data);
    }

    freeList(head);
    return 0;
}
