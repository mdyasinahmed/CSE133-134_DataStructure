#include<stdio.h>
#define s 1000

int main(){
    int n, a[s], count=0, i;
    printf("Enter Size of data & Data: ");
    scanf("%d", &n); 

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    int x;
    printf("Enter Searching Value: ");
    scanf("%d", &x);

    for(i=0;i<n;i++){
        if(a[i] == x){
            count++;
        }
    }

    if(count>0){
        printf("Value Matched!\n");
    }
    else{
        printf("Value Not Found!\n");
    }


    return 0;
}