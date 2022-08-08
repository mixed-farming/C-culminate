#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rownum,colnum,**table,i,j;
    printf("Enter the number of rows in the ragged array : ");
    scanf("%d",&rownum);

    table = (int **) calloc(rownum+1,sizeof(int *));

    //getting the values for the ragged array
    for(i=0;i<rownum;i++)
    {
        printf("\n\nEnter the number of elements in row %d : ",i+1);
        scanf("%d",&colnum);
        table[i]=(int *) calloc(colnum+1,sizeof(int));
        table[i][0]= colnum;
        printf("\nEnter row %d elements : ",i+1);
        for(j=1;j<=colnum;j++)
        {
            scanf("%d",&table[i][j]);
        }
    }
    table[i]=NULL;//last row

    //printing the ragged array values
    printf("\n\nRAGGED ARRAY : \n\n");
    printf("No.of elements\tElements\n");

    for(i=0;i<rownum;i++)
    {
        for(j=0;j<=*table[i];j++)
        {
            if(j==0)
            {
                printf("%d\t\t",table[i][j]);
            }
            else
            {
                printf("%d ",table[i][j]);
            }
        }
        printf("\n");
    }

    for(i=0;i<rownum;i++)
    {
        free(table[i]);
    }

    free(table);


    return 0;
}
