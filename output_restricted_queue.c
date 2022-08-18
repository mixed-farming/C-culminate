#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 5
typedef struct
{
    int front, rear;
    char* array[MAX_QUEUE_SIZE];
} Queue;
void print(Queue q)
{
    if (q.front == -1 && q.rear == -1)
        printf("\nThe queue is empty");
    else
    {
        printf("\n");
        for (int i = q.front; i <= q.rear; i++)
            printf("%s\t", q.array[i]);
    }
}
void pushRight(Queue *q, char* key)
{
    if (q->rear == MAX_QUEUE_SIZE - 1)
        printf("\nThe queue is full");
    else
    {
        if (q->front == -1 && q->rear == -1)
            q->front++;
        q->array[++q->rear] = key;
    }
}
void pushLeft(Queue *q, char* key)
{
    if (q->rear == MAX_QUEUE_SIZE - 1)
        printf("\nThe queue is full");
    else
    {
        if (q->front == -1 && q->rear == -1)
            q->front++;
        for(int i = q->rear; i>=q->front; i--)
            q->array[i+1] = q->array[i];
        ++q->rear;
        q->array[q->front] = key;
    }
}
char* pop(Queue *q)
{
    char* temp = q->array[q->front];
    q->front++;
    if (q->front > q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    return temp;
}
char* front(Queue q)
{
    return q.array[q.front];
}
void main()
{
    printf("Manoj M Mallya\n 200905130\n SECTION C2\n ROLL NO. 23\n\n\n");
    Queue q;
    q.front = -1;
    q.rear = -1;
    int ch = 0;
    char* ele;
    do
    {
        printf("\n1 : Display the Queue \n2 : Pop \n3 : Push element from Right\n4 : Push element from Left\n5 : Exit");
        printf("\nEnter the operation to be done: ");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1:
            print(q);
            break;
        case 2:
            if (q.front == -1 && q.rear == -1)
                printf("\nThe queue is empty");
            else
            {
                ele = pop(&q);
                printf("\nElement popped is %s", ele);
            }
            break;
        case 3:
            ele = (char*)calloc(100, sizeof(char));
            printf("\nEnter the element : ");
            scanf(" %s", ele);
            pushRight(&q, ele);
            break;
        case 4:
            ele = (char*)calloc(100, sizeof(char));
            printf("\nEnter the element : ");
            scanf(" %s", ele);
            pushLeft(&q, ele);
            break;
        }
        printf("\n");
    }
    while(ch!=5);
}



