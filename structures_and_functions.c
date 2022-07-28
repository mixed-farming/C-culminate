#include <stdio.h>
#include <stdlib.h>

void read(struct book);//prototype
int main()
{
    int i;
    struct book ;
    printf("\nEnter IBN , Author name & Price : \n");
    read(b1);//function call
    printf("\nThe book details entered are : \n");
    for(i=0; i<2; i++)
    {
        printf("\nBook %d",i+1);
        printf("\nIBN:\t\t%d",b1[i].ibn);
        printf("\nAuthor:\t%s",b1[i].author);
        printf("\nPrice:\t\t%f",b1[i].price);
    }
    return 0;
}

//Structure Definition
struct book
{
    int ibn;
    char author[15];
    float price;
};

//function definition
void read(struct book a[])
{
    int i;
    for(i=0; i<2; i++)
    {
        printf("\nBook%d\n", i+1);
        scanf("%d", &a[i].ibn);
        scanf("%s", a[i].author);
        scanf("%f", &a[i].price);
    }
}
