#include <stdio.h>

//Function to Print an Array
void printArray(int array[], int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ", array[i]);
    }
}

// Function to Swap 2 value Address
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

//Function for Selection Sort Operation
void selectionSort(int array[], int size){
    int i, j, minIndex;
    for(i=0; i<size-1; i++){
        minIndex = i;
        for(j=i+1; j<size; j++){
            if(array[j] < array[minIndex]){
                minIndex = j;
            }
        }
        swap(&array[minIndex], &array[i]);
    }
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