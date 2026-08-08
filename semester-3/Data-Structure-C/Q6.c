//make a c program to implement push,pop and peek operations on stack with struct.
#include<stdio.h>

struct Stack {
    int data[100];
    int top;
};

void push(struct Stack *s, int value) {
    if (s->top == 99) {
        printf("Stack Overflow\n");
        return;
    }
    s->top++;
    s->data[s->top] = value;
    printf("%d pushed to stack\n", value);
}

void pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("%d popped from stack\n", s->data[s->top]);
    s->top--;
}

void peek(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element of the stack is: %d\n", s->data[s->top]);
}

int main() {
    struct Stack s;
    s.top = -1;

    push(&s, 10);
    push(&s, 20);
    peek(&s);
    pop(&s);
    peek(&s);

    return 0;
}