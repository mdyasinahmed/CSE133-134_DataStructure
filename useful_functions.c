#include <stdio.h>

//Function to Print an Array
void printArray(int array[], int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ", array[i]);
    }
}

// Function to Swap 2 value Address
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}