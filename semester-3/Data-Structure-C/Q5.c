//write a c program to implement push,pop and peek operations on stack.
#include <stdio.h>

int top = -1;

void push(int stack[], int size) {
    int value;

    if (top == size - 1) {
        printf("Stack Overflow\n");
        return;
    }

    printf("Enter the value to push: ");
    scanf("%d", &value);
    top++;
    stack[top] = value;
    printf("%d pushed to stack\n", value);
}

void pop(int stack[]) {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }

    printf("%d popped from stack\n", stack[top]);
    top--;
}

void peek(int stack[]) {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element of the stack is: %d\n", stack[top]);
}

int main(void) {
    int stack[100];
    int choice;
    int size = 100;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push(stack, size);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                peek(stack);
                break;
            case 4:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}