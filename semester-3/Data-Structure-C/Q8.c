// Given an expression string consisting of opening and closing brackets
// '{', '}', '(', ')', '[', and ']',
// write a program using a stack to check whether the expression
// has balanced parentheses or not.
#include <stdio.h>

#define MAX 100

int isBalanced(const char *exp)
{
    char stack[MAX];
    int top = -1;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            stack[++top] = exp[i];
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (top == -1)
                return 0;

            char last = stack[top--];

            if ((last == '(' && exp[i] != ')') ||
                (last == '{' && exp[i] != '}') ||
                (last == '[' && exp[i] != ']'))
            {
                return 0;
            }
        }
    }

    return top == -1;
}

int main()
{
    char exp[] = "([)]";

    printf("Student Name: Zishan\n");
    printf("Input expression: %s\n", exp);

    if (isBalanced(exp))
        printf("Balanced expression\n");
    else
        printf("Unbalanced expression\n");

    return 0;
} 