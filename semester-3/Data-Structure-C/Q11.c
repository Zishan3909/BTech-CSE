// III. Design an algorithm and write a program to implement Deque i.e. double ended queue. Double
// ended queue is a queue in which insertion and deletion can be done from both ends of the queue.
// The program should implement following operations:
// a) insertFront() - insert an element at the front of Dequeb)insertEnd() - insert an element at the end of Deque
// c) deleteFront() - delete an element from the front of Deque
// d) deleteEnd() - delete an element from the end of Deque
// e) isEmpty() - checks whether Deque is empty or not
// f)isFull() - checks whether Deque is full or not
// g) printFront() - print Deque from front
// h) printEnd() - print Deque from end
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int deque[MAX];
int front = -1;
int rear = -1;

int isEmpty() {
    return (front == -1 && rear == -1);
}
int isFull() {
    return (rear + 1) % MAX == front;
} void insertFront(int value) {
    if (isFull()) {
        printf("Deque is full. Cannot insert %d at front.\n", value);
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        front = (front - 1 + MAX) % MAX;
    }
    deque[front] = value;
} 
void insertEnd(int value) {
    if (isFull()) {
        printf("Deque is full. Cannot insert %d at end.\n", value);
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX;
    }
    deque[rear] = value;
} void deleteFront() {
    if (isEmpty()) {
        printf("Deque is empty. Cannot delete from front.\n");
        return;
    }
    if (front == rear) {
        front = rear = -1; // Deque becomes empty
    } else {
        front = (front + 1) % MAX;
    }
} void deleteEnd() {
    if (isEmpty()) {
        printf("Deque is empty. Cannot delete from end.\n");
        return;
    }
    if (front == rear) {
        front = rear = -1; // Deque becomes empty
    } else {
        rear = (rear - 1 + MAX) % MAX;
    }
} void printFront() {
    if (isEmpty()) {
        printf("Deque is empty.\n");
        return;
    }
    printf("Deque from front: ");
    int i = front;
    while (1) {
        printf("%d ", deque[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
} void printEnd() {
    if (isEmpty()) {
        printf("Deque is empty.\n");
        return;
    }
    printf("Deque from end: ");
    int i = rear;
    while (1) {
        printf("%d ", deque[i]);
        if (i == front) break;
        i = (i - 1 + MAX) % MAX;
    }
    printf("\n");
} 
int  main() {
    int choice, value;
    while (1) {
        printf("\nDeque Operations:\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at End\n");
        printf("3. Delete from Front\n");
        printf("4. Delete from End\n");
        printf("5. Print from Front\n");
        printf("6. Print from End\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter value to insert at front: ");
                scanf("%d", &value);
                insertFront(value);
                break;
            case 2:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                insertEnd(value);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteEnd();
                break;
            case 5:
                printFront();
                break;
            case 6:
                printEnd();
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}