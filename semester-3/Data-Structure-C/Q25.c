// III.For an expression in the form of binary tree, infix representation of the expression is given in the
// form of character array.. Design an algorithm and a program to convert infix expression of this
// tree to postfix expression. Postfix representation of expression should follow BODMAS rule.
// Input Format:
// The first line contains number of test cases, T.
// For each test case, there will be two input lines.
// First line contains n (the size of array).
// Second line contains space-separated characters describing array.
// Output Format:
// The output will have T number of lines. For each test case, output will be the postfix representation for the corresponding infix expression. 
// Sample:
// Input:
// 2
// a+b*c
// a+b*(c^d-e)^(f+g*h)-i
// Output:
// abc*+
// abcd^e-fgh*+^*+i

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char stack[100];
int top = -1;

// Push element into stack
void push(char ch) {
    stack[++top] = ch;
}

// Pop element from stack
char pop() {
    return stack[top--];
}

// Find operator precedence
int precedence(char ch) {
    if (ch == '^')
        return 3;

    if (ch == '*' || ch == '/' || ch == '%')
        return 2;

    if (ch == '+' || ch == '-')
        return 1;

    return 0;
}

// Convert infix to postfix
void infixToPostfix(char infix[]) {
    char postfix[100];
    int i, j = 0;

    top = -1;

    for (i = 0; infix[i] != '\0'; i++) {

        char ch = infix[i];

        // If operand, add to postfix
        if (isalnum(ch)) {
            postfix[j++] = ch;
        }

        // If opening bracket
        else if (ch == '(') {
            push(ch);
        }

        // If closing bracket
        else if (ch == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[j++] = pop();
            }
            if (top != -1)
                pop();
        }

        // If operator
        else {
            while (top != -1 && stack[top] != '(' &&
                  (precedence(stack[top]) > precedence(ch) ||
                  (precedence(stack[top]) == precedence(ch) &&
                   ch != '^'))) {

                postfix[j++] = pop();
            }

            push(ch);
        }
    }

    // Pop remaining operators
    while (top != -1) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("%s\n", postfix);
}

int main() {
    int T;
    char infix[100];

    scanf("%d", &T);

    while (T--) {
        scanf("%99s", infix);
        infixToPostfix(infix);
    }

    return 0;
}
