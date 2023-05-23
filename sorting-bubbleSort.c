#include <stdio.h>
#define s 1000

// Function to Swap 2 value Address
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function for Bubble Sort Operations
void bubbleSort(int a[], int n){
    int i, j;

    for(i=0; i<n-1; ++i){
        for(j=0; j<n-i-1; ++j){
            if(a[j]>a[j+1]){
                swap(&a[j], &a[j+1]);
            }
        }
    }
}

//Function to Print an Array
void printArray(int array[], int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ", array[i]);
    }
}


int main()
{
    int n, a[s], i;
    printf("Enter Size & Array: ");
    scanf("%d", &n); 

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    printf("Array after Sorting: ");
    bubbleSort(a,n);
    printArray(a,n);
}