#include <stdio.h>
#include <stdlib.h>

int main()
{
    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n, i;

    // Get the number of elements for the array
    printf("Enter number of elements: ");
    scanf("%d",&n);

    // Dynamically allocate memory using calloc()
    ptr = (int*)calloc(n, sizeof(int));

    // Check if the memory has been successfully
    // allocated by calloc or not
    if (ptr == NULL) {
        printf("\nMemory not allocated.\n");
        exit(0);
    }
    else {

        // Memory has been successfully allocated
        printf("\nMemory successfully allocated using calloc.\n");

        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        printf("\nThe elements of the array are: \n");
        for (i = 0; i < n; ++i) {
            printf("%d ", ptr[i]);
        }
    }
    printf("\n");
    return 0;
}
