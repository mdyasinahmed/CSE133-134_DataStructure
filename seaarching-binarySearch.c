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
// Function for binary search operation
void binarySearch(int a[], int n, int x){
    int i;
    bubbleSort(a,n);
    
    for(i=0; i<n; i++){
        int beg = i, end = n-1, mid = (beg+mid)/2;
        while(beg<=end)
        {
            if(a[mid] > x){
                end = mid - 1;
                mid = mid = (beg+mid)/2;
            }
            else{
                beg = mid + 1;
                mid = mid = (beg+mid)/2;
            }

            if(a[mid] == x){
                printf("Value Matched\n");
                break;
            }
        }
    }
}
int main()
{
    int n, a[s];
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);

    binarySearch(a,n,x);
}