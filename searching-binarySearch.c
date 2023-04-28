#include <stdio.h>

// Swap 2 item Address
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Bubble-Sort
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


void binarySearch(int array[], int size, int searchingValue)
{
    // Start | End | Mid  --> Compare <--
    int position, start, end, mid;

    start = 0;
    end = size -1;
    mid = (start-end)/2;

    while((start <= end) && (array[mid] != searchingValue))
    {
        if(searchingValue < array[mid])
        {
            end = mid -1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end)/2;
    }

    if(array[mid] == searchingValue) printf("Yes\n");
    else printf("No\n");
}

// Printing Array
void printArray(int array[], int arraySize)
{
    int step;
    for (step = 0; step < arraySize; step++)
    {
       printf("%d ", array[step]);
    }
    printf("\n");
}

int main()
{
    //Scanning Array Size & Array
    int s;
    scanf("%d", &s);
    
    int a[s];

    for(int i=0; i<s; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int x;
    printf("Searching Value: ");
    scanf("%d", &x);
    // Sorting Array
    printf("Sorted Array: ");
    bubbleSort(a,s);
    printArray(a,s);
    binarySearch(a,s,x);

    return 0;
}