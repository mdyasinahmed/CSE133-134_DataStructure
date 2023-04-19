#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int stack[2*n];
    int top = -1;

    stack[++top] = 0;
    stack[++top] = n-1;


    while (top >= 0) {
        int high = stack[top--];
        int low = stack[top--];

        int pivot = arr[high];
        int i = low;
        int j = high;

        for (;;) {
            while (arr[i] < pivot) {
                i++;
            }
            while (arr[j] > pivot) {
                j--;
            }
            if (i >= j) {
                break;
            }
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }

        if (low < j) {
            stack[++top] = low;
            stack[++top] = j;
        }
        if (i < high) {
            stack[++top] = i;
            stack[++top] = high;
        }
    }

    printf("Sorted array: ");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
