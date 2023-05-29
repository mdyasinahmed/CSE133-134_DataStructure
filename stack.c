#include<stdio.h>
#define Capacity 5
int stack[Capacity];
int top = -1;

int push(int x){
    if(top < Capacity-1){
        top = top+1;
        stack[top] = x;
        printf("Push(%d)\n", x);
    }
    else{
        printf("No Spaces!\n");
    }
}

int pop(){
    if(top >= 0){
        printf("Pop()\n");
        int val = stack[top];
        top = top -1;
        return val;
    }
    printf("Empty Stack!\n");
    return -1;
}

int peak(){
    if(top >= 0){
        return stack[top];
    }
    printf("Empty Stack!\n");
    return -1;
}

int main()
{
    push(5);
    push(10);
    push(15);
    pop(15);
    push(20);
    push(25);
    push(30);
    push(35);
    
    printf("\nTop Value: %d", peak());
    return 0;
}