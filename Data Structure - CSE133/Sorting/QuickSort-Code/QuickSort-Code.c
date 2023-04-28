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

void QuickSortKorr(int arr[], int start, int end)
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
        QuickSortKorr(arr, start, target - 1);
        QuickSortKorr(arr, target + 1, end);
    }
}

void AkhonTuiArrayPrintKor(int a[], int thamEikhane)
{
    int shuru;
    for (shuru = 0; shuru < thamEikhane; shuru++)
    {
       printf("%d ", a[shuru]);
    }
    printf("\n");
}


int main()
{
    int s, arr[s];
    scanf("%d", &s);

    for(int i=0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    QuickSortKorr(arr, 0, s - 1);

    AkhonTuiArrayPrintKor(arr,s);

    return 0;
}


