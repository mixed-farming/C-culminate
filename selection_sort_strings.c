#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[100][100], temp[100], minStr[100];
    int n,i, j, min_idx=i;
    printf("Enter the number of strings : ");
    scanf("%d", &n);
    printf("Enter the array\n");
    fflush(stdin); // clear the input buffer
    for (i= 0; i< n; i++)
        gets(arr[i]);

    for (i= 0; i< n-1; i++)// Moving boundary of unsorted sub-array
    {
        strcpy(minStr, arr[i]);// Find the minimum element in unsorted array
        for (j = i+1; j < n; j++)
        {

            if (strcmp(minStr, arr[j]) > 0)// If min Str is greater than arr[j]
            {
                strcpy(minStr, arr[j]);// Make arr[j] as minStrand update min_idx
                min_idx= j;
            }
        }

        if (min_idx!= i)// Swap the found minimum element with the first element
        {
            strcpy(temp, arr[i]); //swap item[pos] and item[i]
            strcpy(arr[i], arr[min_idx]);
            strcpy(arr[min_idx], temp);
        }
    }
    printf("\nSorted array is\n");
    for (i= 0; i< n; i++)
        puts( arr[i]);

return 0;
}
