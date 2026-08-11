// Given an empty stack, design an algorithm and a program to reverse a string using stack(with and without using recursion).
#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push an element into the stack
void push(char ch)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = ch;
}

// Pop an element from the stack
char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return '\0';
    }

    return stack[top--];
}

// Reverse string using stack
void reverseString(char *str)
{
    int len = strlen(str);

    // Push all characters into stack
    for (int i = 0; i < len; i++)
    {
        push(str[i]);
    }

    // Pop characters and put them back into string
    for (int i = 0; i < len; i++)
    {
        str[i] = pop();
    }
}

int main()
{
    char str[] = "Hello, World!";

    printf("Student Name: Zishan\n");
    printf("Original string: %s\n", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}