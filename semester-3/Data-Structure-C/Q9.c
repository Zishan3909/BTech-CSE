// Given an empty stack, design an algorithm and a program to reverse a string using stack(with and without using recursion).
#include <stdio.h>
#include <string.h>

#define MAX 100

void reverseString(char *str)
{
    char stack[MAX];
    int top = -1;
    int len = strlen(str);

    // Push all characters onto the stack
    for (int i = 0; i < len; i++)
    {
        stack[++top] = str[i];
    }

    // Pop all characters from the stack and store them back in the string
    for (int i = 0; i < len; i++)
    {
        str[i] = stack[top--];
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