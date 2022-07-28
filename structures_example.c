#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Book  // definition
    {
        char title[20];
        char author[15];
        int pages;
        float price;
    };

    struct Book b1;
    printf("Input values of title , author , pages , price in order : \n");
    fflush(stdin);
    gets(b1.title);
    gets(b1.author);
    scanf("%d %f", &b1.pages, &b1.price);
//output
    printf("\nTitle-%s \nAuthor-%s \nPages-%d \nPrice-%f\n", b1.title, b1.author, b1.pages,
           b1.price);
    return 0;
}
