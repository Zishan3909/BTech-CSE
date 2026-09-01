// III.Design an algorithm and write a program to implement circular queue. Circular queue is a queue
// in which last position of queue is connected with first position of queue to make a circle. The
// program should implement following operations:
// a) Create() - create a queue of specific size
// b)EnQueue(k) - insert an element k into the queue
// c) DeQueue() - delete an element from the queue
// d)IsEmpty() - check if queue is empty or not
// e) Front() - return front item from queue
// f) Rear() - return rear item from queue
#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = -1, rear = -1;
int size;

/* Create the queue */
void Create()
{
    printf("Enter size of circular queue: ");
    scanf("%d", &size);

    front = -1;
    rear = -1;

    printf("Queue created successfully.\n");
}

/* Check whether queue is empty */
int IsEmpty()
{
    if (front == -1)
        return 1;
    else
        return 0;
}

/* Check whether queue is full */
int IsFull()
{
    if ((rear + 1) % size == front)
        return 1;
    else
        return 0;
}

/* Insert an element */
void EnQueue(int value)
{
    if (IsFull())
    {
        printf("Queue is full.\n");
        return;
    }

    if (IsEmpty())
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % size;
    }

    queue[rear] = value;

    printf("Circular Queue: ");

    int i = front;

    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % size;
    }

    printf("\n");
}

/* Delete an element */
void DeQueue()
{
    if (IsEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front]);

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % size;
    }

    printf("Circular Queue: ");

    if (IsEmpty())
    {
        printf("Empty");
    }
    else
    {
        int i = front;

        while (1)
        {
            printf("%d ", queue[i]);

            if (i == rear)
                break;

            i = (i + 1) % size;
        }
    }

    printf("\n");
}

/* Display front element */
void Front()
{
    if (IsEmpty())
        printf("Queue is empty.\n");
    else
        printf("Front item: %d\n", queue[front]);
}

/* Display rear element */
void Rear()
{
    if (IsEmpty())
        printf("Queue is empty.\n");
    else
        printf("Rear item: %d\n", queue[rear]);
}

int main()
{
    int choice, value;

    Create();

    do
    {
        printf("\n1. EnQueue\n");
        printf("2. DeQueue\n");
        printf("3. IsEmpty\n");
        printf("4. Front\n");
        printf("5. Rear\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d", &value);
                EnQueue(value);
                break;

            case 2:
                DeQueue();
                break;

            case 3:
                if (IsEmpty())
                    printf("Queue is empty.\n");
                else
                    printf("Queue is not empty.\n");
                break;

            case 4:
                Front();
                break;

            case 5:
                Rear();
                break;

            case 6:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 6);

    return 0;
}
