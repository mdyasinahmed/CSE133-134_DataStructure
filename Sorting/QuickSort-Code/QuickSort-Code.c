#include <stdio.h>
/*
// Set a Pivot
// Comparing Array
// Dividing Array
// Function to Swap


int main()
{
    int n, arr[n], i, Pivot, *target, j;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i=0; i<n; i++)
    {
        Pivot = arr[n-1];
        if(arr[i] > Pivot)
        {
            targ et = &arr[i];
        }
        /*for(j=(i+1);j<(n-1);j++)
            {
                if(arr[j]<Pivot)
                {
                    swap(&target, &arr[j]);
                }
                else if(arr[j] > Pivot)
                {
                    swap(&target, &Pivot);
                }
            }
    }
    printf("%d\n", target);

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/
void swapKor(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void quickSortKorr(int arr[], int start, int end) {
    if (start < end) {
        int pivot = arr[end];
        int target = start - 1;
        for (int i = start; i < end; i++) {
            if (arr[i] < pivot) {
                target++;
                /*
                int temp = arr[i];
                arr[i] = arr[target];
                arr[target] = temp;
                */
                swapKor(&arr[i], &arr[target]);
            }
        }
        target++;
        swapKor(&arr[end], &arr[target]);
        quickSortKorr(arr, start, target - 1);
        quickSortKorr(arr, target + 1, end);
    }
}
void ArrayScanKor(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
}
void AkhonTuiArrayPrintKor(int a[], int size)
{
    int step;
    for (step = 0; step < size; step++)
    {
       printf("%d ", a[step]);
    }
    printf("\n");
}


int main() {
    int n;
    int arr[n];
    scanf("%d", &n);

    ArrayScanKor(arr,n);
    quickSortKorr(arr, 0, n - 1);
    AkhonTuiArrayPrintKor(arr,n);

    return 0;
}


