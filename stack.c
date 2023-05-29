#include<stdio.h>
#define Capacity 5
int stack[Capacity];
int top = -1;

int push(int x){
    if(top < Capacity-1){
        top = top+1;
        stack[top] = x;
        printf("Added Item: %d\n", x);
    }
    else{
        printf("No Spaces!\n");
    }
}



int main()
{
    push(5);

    printf("Top Value: %d\n", peak());
    return 0;
}