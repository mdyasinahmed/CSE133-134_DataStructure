#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void QuickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pivot = arr[end];
        int target = start - 1;
        for (int i = start; i < end; i++)
        {
            if (arr[i] < pivot)
            {
                target++;
                swap(&arr[i], &arr[target]);
            }
        }
        target++;
        swap(&arr[end], &arr[target]);
        QuickSort(arr, start, target - 1);
        QuickSort(arr, target + 1, end);
    }
}

void printArray(int a[], int n)
{
    int n;
    while(n--)
    {
       printf("%d ", a[n]);
    }
    printf("\n");
}


int main()
{
    int s, arr[s];
    scanf("%d", &s);

    while(s--)
    {
        scanf("%d", &arr[s]);
    }
    
    QuickSort(arr, 0, s - 1);

    printArray(arr,s);

    return 0;
}