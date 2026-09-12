//write a c program to implement  queue using functions
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(void)
{
	int value;

	if (rear == MAX - 1)
	{
		printf("Queue overflow.\n");
		return;
	}

	printf("Enter value: ");
	scanf("%d", &value);

	if (front == -1)
	{
		front = 0;
	}
	queue[++rear] = value;
	printf("%d inserted into the queue.\n", value);
}

void dequeue(void)
{
	if (front == -1 || front > rear)
	{
		printf("Queue underflow.\n");
		return;
	}

	printf("%d deleted from the queue.\n", queue[front++]);

	if (front > rear)
	{
		front = -1;
		rear = -1;
	}
}

void display(void)
{
	int index;

	if (front == -1)
	{
		printf("Queue is empty.\n");
		return;
	}

	printf("Queue: ");
	for (index = front; index <= rear; index++)
	{
		printf("%d ", queue[index]);
	}
	printf("\n");
}

int main(void)
{
	int choice;

	do
	{
		printf("\n1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("Exiting...\n");
			break;
		default:
			printf("Invalid choice.\n");
		}
	} while (choice != 4);

	return 0;
}
