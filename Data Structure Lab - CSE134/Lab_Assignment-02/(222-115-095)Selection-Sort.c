#include <stdio.h>
#define s 1000

int main()
{
    int n, i, j, position, min;
    // scanning Array size and Array
    printf("Enter Array Size & Array: \n");
    scanf("%d", &n);
    int a[s];

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        min = a[i];
        position = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j] < min)
            {
                min = a[j];
                position = j;
            }
        }

        if(position != i)
        {
            int temp = a[i];
            a[i] = a[position];
            a[position] = temp;
        }
    }

    //Printing Array
    printf("Array after Sorting: \n");
    printArray(a, n);

    return 0;
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

