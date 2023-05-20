#include <stdio.h>

int main()
{
    int s, i;
    scanf("%d", &s);

    int array[s];
    for(i=0; i<s; i++)
    {
        scanf("%d", &array[i]);
    }

    quicksort(array, 0, s-1);

    for(i = 0; i < s; i++)
    {
        printf("%d ", array[i]);
    }
}

void quicksort(int a[], int low, int high)
{
    if(low<high)
    {
        int pivot = a[high];
        int target = low-1;
        for(int i=low; i<high; i++){
            if(a[i] < pivot){
                target++;
                swap(&a[i], &a[target]);
            }
        }
        target++;
        swap(&a[high], &a[target]); //swap of target & pivot
        //divide will start from first swap position of pivot
        quicksort(a, low, target-1);
        quicksort(a, target+1, high);
    }
}


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}



