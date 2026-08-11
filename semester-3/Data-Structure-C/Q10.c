//Design an algorithm and a program to implement a two  stack  by using  one array  both the stack use push and pop operation array should divided in such a manner that space should be efficiently used if one stack contains very large number of elements and other one condition only few element.
#include <stdio.h>

#define MAX 100

int array[MAX];
int stack1_top = -1;
int stack2_top = MAX;

// Push into Stack 1
void push1(int data)
{
    if (stack1_top < stack2_top - 1)
    {
        array[++stack1_top] = data;
    }
    else
    {
        printf("Stack 1 is full\n");
    }
}

// Push into Stack 2
void push2(int data)
{
    if (stack1_top < stack2_top - 1)
    {
        array[--stack2_top] = data;
    }
    else
    {
        printf("Stack 2 is full\n");
    }
}

// Pop from Stack 1
int pop1()
{
    if (stack1_top >= 0)
    {
        return array[stack1_top--];
    }
    else
    {
        printf("Stack 1 is empty\n");
        return -1;
    }
}

// Pop from Stack 2
int pop2()
{
    if (stack2_top < MAX)
    {
        return array[stack2_top++];
    }
    else
    {
        printf("Stack 2 is empty\n");
        return -1;
    }
}

int main()
{
    printf("Student Name: Zishan\n");

    push1(10);
    push1(20);
    push1(30);

    push2(100);
    push2(200);
    push2(300);

    printf("Popped from Stack 1: %d\n", pop1());
    printf("Popped from Stack 1: %d\n", pop1());

    printf("Popped from Stack 2: %d\n", pop2());
    printf("Popped from Stack 2: %d\n", pop2());

    return 0;
}