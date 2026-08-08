// Given an expression string consisting of opening and closing brackets "(", ")", "{", "}", "[", "]",
// design an algorithm and a program to check whether the expression has balanced parentheses using stack data structure.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack {
    char data[100];
    int top;
};

void push(struct Stack *stack, char ch) {
    if (stack->top < 99) {
        stack->data[++stack->top] = ch;
    }
}

char pop(struct Stack *stack) {
    if (stack->top >= 0) {
        return stack->data[stack->top--];
    }
    return '\0';
}

int isEmpty(const struct Stack *stack) {
    return stack->top == -1;
}

int isMatchingPair(char opening, char closing) {
    return (opening == '(' && closing == ')') ||
           (opening == '{' && closing == '}') ||
           (opening == '[' && closing == ']');
}

int isBalanced(const char *expression) {
    struct Stack stack;
    stack.top = -1;

    for (size_t i = 0; i < strlen(expression); ++i) {
        char ch = expression[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push(&stack, ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (isEmpty(&stack)) {
                return 0;
            }
            char topChar = pop(&stack);
            if (!isMatchingPair(topChar, ch)) {
                return 0;
            }
        }
    }

    return isEmpty(&stack);
}

int main(void) {
    char expression[100];

    printf("Enter an expression: ");
    if (fgets(expression, sizeof(expression), stdin) == NULL) {
        return 1;
    }

    // Remove newline if present
    size_t len = strlen(expression);
    if (len > 0 && expression[len - 1] == '\n') {
        expression[len - 1] = '\0';
    }

    if (isBalanced(expression)) {
        printf("The expression is balanced.\n");
    } else {
        printf("The expression is not balanced.\n");
    }

    return 0;
}

