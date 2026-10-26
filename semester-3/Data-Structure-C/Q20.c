//  Write an algorithm that will split a linked lists,so that successive nodes go to different lists.odd numbered nodes to the first list while even numbered nodes go to the second list. 
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* insert(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main(){
    struct Node* head = NULL;
    struct Node* oddList = NULL;
    struct Node* evenList = NULL;

    // Inserting nodes into the original list
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);

    printf("Original List: ");
    display(head);

    // Splitting the list into odd and even lists
    struct Node* current = head;
    while (current != NULL) {
        if (current->data % 2 != 0) {
            oddList = insert(oddList, current->data);
        } else {
            evenList = insert(evenList, current->data);
        }
        current = current->next;
    }

    printf("Odd List: ");
    display(oddList);

    printf("Even List: ");
    display(evenList);

    // Freeing allocated memory
    current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    current = oddList;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    current = evenList;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}