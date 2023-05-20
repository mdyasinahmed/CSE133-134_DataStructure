#include <stdio.h>

// Function for Swap 2 item Address
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function for Quick-Sort Operation
void Quick_Sort(int a[], int first, int last)
{
    if(first<last)
    {
        int pivot = a[last], target = first-1;

        for(int i=first; i<last; i++)
        {
            if(a[i]<pivot)
            {
                target++;
                swap(&a[i], &a[target]);
            }
        }

        target++;
        swap(&a[last], &a[target]);
        Quick_Sort(a, first, target-1);
        Quick_Sort(a, target+1, last);
    }
}
// Function to Print an Array
void printArray(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
       printf("%d ", a[i]);
    }
    printf("\n");
}

// Function - Main
int main()
{
    //scanning array size and array
    printf("Enter Array Size & Array: \n");
    int n, i;
    scanf("%d", &n);

    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    //calling function for Quick Sort operation
    Quick_Sort(a, 0, n-1);

    //Printing Array
    printf("Array after Sorting: \n");
    printArray(a, n);

    return 0;
}