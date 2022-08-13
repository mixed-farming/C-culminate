#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 10

typedef struct
{
    int front, rear;
    int array[MAX_QUEUE_SIZE];
} Queue;
void display(Queue q)
{
    if (q.front == -1 && q.rear == -1)
    {
        printf("\nThe queue is empty.");
    }
    else
    {
        printf("\n");
        for (int i = q.front; i <= q.rear; i++)
        {
            printf(" %3d ", q.array[i]);
        }
    }
}
void push(Queue *q, int key)
{
    if(q->rear == MAX_QUEUE_SIZE - 1)
        printf("\nThe queue is full");
    else
    {
        if (q->front == -1 && q->rear == -1)
            q->front++;
        int pos;
        for(int i = q->front; i<=q->rear; i++)
        {
            if(q->array[i]<=key)//make this >= for descending order PQ
                pos = i+1;
        }
        for(int i = q->rear; i>=pos; i--)
            q->array[i+1] = q->array[i];
        q->rear++;
        q->array[pos] = key;
    }
}
int pop(Queue *q)
{
    int temp = q->array[q->front];
    q->front++;
    if (q->front > q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    return temp;
}
void main()
{
    printf("Manoj M Mallya\n 200905130\n SECTION C2\n ROLL NO. 23\n\n\n");
    Queue q;
    q.front = -1;
    q.rear = -1;
    int choice = 0, ele;
    do
    {
        printf("\n1: Display the Queue \n2: Pop \n3: Push an element \n4: Exit");
        printf("\nEnter the operation to be done: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display(q);
            break;

        case 2:
            if (q.front == -1 && q.rear == -1)
                printf("\nThe queue is empty");
            else
            {
                ele = pop(&q);
                printf("\nElement poppped is %d", ele);
            }
            break;
        case 3:
            printf("\nEnter the element to be pushed : ");
            scanf("%d", &ele);
            push(&q, ele);
            break;
        }
        printf("\n");
    }
    while(choice!=4);
}

