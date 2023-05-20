#include <stdio.h>

// Function for Swap 2 item Address
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function for Bubble-Sort Operation
void bubbleSort(int a[], int size)
{
    int step, store, i;
    for(step = 0; step < size; step++)
    {
        for(i=0; i < size-step-1; i++)
        {
            if(a[i]>a[i+1])
            {
                swap(&a[i], &a[i+1]);
            }
        }
    }
}

// Function for Printing Array
void printArray(int array[], int arraySize)
{
    int step;
    for (step = 0; step < arraySize; step++)
    {
       printf("%d ", array[step]);
    }
    printf("\n");
}

// Main Function
int main()
{
    int s, arr[s];
    //scanning array size and array
    printf("Enter Array Size & Array: \n");
    scanf("%d", &s);
    for(int i=0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }

    //calling function for bubble Sort operation
    bubbleSort(arr,s);

    printf("Array after Sorting: \n");
    printArray(arr,s);
    
    return 0;
}