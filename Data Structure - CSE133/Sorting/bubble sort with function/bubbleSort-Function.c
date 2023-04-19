#include <stdio.h>

// Function to Swap 2 item Address
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Bubble-Sort Operation Function
void bubbleSort(int a[], int size)
{
    int step, store, i;
    for(step = 0; step < size; step++)
    {
        for(i=0; i < size-step-1; i++)
        {
            if(a[i]>a[i+1])
            {
                /*
                store = a[i];

                a[i] = a[i+1];
                a[i+1] = store;
                */
                swap(&a[i], &a[i+1]);
            }
        }
    }
}
// Function to Print Array
void ArrayPrintKor(int a[], int size)
{
    int step;
    for (step = 0; step < size; step++)
    {
       printf("%d ", a[step]);
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

    bubbleSort(arr,s);
    ArrayPrintKor(arr,s);
}
