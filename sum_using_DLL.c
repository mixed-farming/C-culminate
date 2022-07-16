#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node * next;
    struct node * prev;
} * NODE;
void insertFront(NODE head, int val)
{
    NODE first = head->next;
    head->data++;
    NODE n = (NODE)malloc(sizeof(struct node));
    n->data = val;
    n->next = NULL;
    n->prev = NULL;
    if(first == NULL)
    {
        n->next = n;
        n->prev = n;
        head->next = n;
        return;
    }
    n->next = first;
    n->prev = first->prev;
    (first->prev)->next = n;
    first->prev = n;
    head->next = n;
    return;
}
void display(NODE head)
{
    if(head->data == 0)
    {
        printf("\nList is empty\n");
        return;
    }
    NODE first = head->next;
    NODE temp = first;
    while(temp->next!=first)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf("%d\n",temp->data);
}
void insert(NODE head, int val)
{
    int x;
    while(val>0)
    {
        x=val%10;
        val/=10;
        insertFront(head,x);
    }
}
NODE addLists(NODE head1, NODE head2)
{
    if(head1->data == 0)
    {
        return head2;
    }
    if(head2->data == 0)
    {
        return head1;
    }
    int c1 = head1->data;
    int c2 = head2->data;
    int diff = c1-c2;
    int s = 0,i;
    if(diff < 0)
    {
        diff *= -1;
        for(i=0; i<diff; ++i)
        {
            insertFront(head1,0);
        }
    }
    else if(diff > 0)
    {
        for(i = 0; i<diff; ++i)
        {
            insertFront(head2,0);
        }
    }
    NODE sum = (NODE)malloc(sizeof(struct node));
    sum->data = 0;
    int carry = 0;
    NODE f1 = head1->next;
    NODE f2 = head2->next;
    NODE op1 = f1->prev;
    NODE op2 = f2->prev;
    while(op1!=f1 && op2!=f2)
    {
        s = (op1->data)+(op2->data)+carry;
        carry = s/10;
        s%=10;
        insertFront(sum,s);
        op1 = op1->prev;
        op2 = op2->prev;
    }
    s = (op1->data)+(op2->data)+carry;
    carry = s/10;
    s%=10;
    insertFront(sum,s);
    if(carry != 0)
    {
        insertFront(sum,carry);
    }
    return sum;
}
int main()
{
    printf("Manoj M Mallya\n200905130\nSection : C2\nRoll no : 23\n\n");
    NODE head1 = (NODE)malloc(sizeof(struct node));
    NODE head2 = (NODE)malloc(sizeof(struct node));
    NODE sum = NULL;
    int v1,v2;
    head1->data = 0;
    head2->data = 0;
    printf("\nEnter first number: ");
    scanf("%d",&v1);
    insert(head1,v1);
    printf("\nEnter second number: ");
    scanf("%d",&v2);
    insert(head2,v2);
    sum = addLists(head1,head2);
    printf("\nSum is : ");
    display(sum);
    return 0;
}
