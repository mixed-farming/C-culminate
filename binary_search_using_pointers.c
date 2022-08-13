#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int list[], int *endPtr, int target, int **locPtr);
int main()
{
    int a[]= {10,20,30,40,50};
    int n=5;
    int *loc; //Pointer to hold the address of element, if found
    int target;
    int *endPtr = a + n-1;
    printf("Array Elements :\n");
    for(int *p=a; p<=endPtr; p++)
        printf("%p = %d\n",p,*p);
    printf("Enter value to be searched :");
    scanf("%d",&target);
//function call
    /*Address of the pointer variable, loc is sent to function
    changes to this is reflected back in the main function
    */
    int flag = BinarySearch(a, endPtr, target, &loc);
    if (flag)
        printf("Element found at %X",loc);
    else
        printf("Element Not Found");
}
int BinarySearch(int list[], int *endPtr, int target, int **locPtr)
{
    /* locPtr is a pointer to pointer and receives the address of pointer variable loc from main and
    returns address of element in loc, if found
    locPtr --->loc---> searching element in array
    */
    int *firstPtr = list;
    int *lastPtr = endPtr;
    int *midPtr = NULL;
    int no_of_elements, midIndex;
    while(firstPtr<=lastPtr)
    {
//find the number of elements between last and first pointers
        no_of_elements = (lastPtr - firstPtr+1);
        midIndex = no_of_elements/2; // find the index of mid element
        midPtr = firstPtr + midIndex; //Point to the mid element
        if (target > *midPtr) firstPtr = midPtr + 1;
        else if (target< *midPtr) lastPtr = midPtr - 1;
        else
            break;
    }
    *locPtr = midPtr; //
    return (*midPtr == target); //return 1 or 0
}
