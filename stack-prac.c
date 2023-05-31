#include <stdio.h>
#define s 5

int stack[s];
int top = -1;


int push(int x)
{
    if(top < s-1){
        top += 1;
        stack[top] = x;
    }
    else{
        printf("No Space\n");
    }
}

int pop(){
    if(top>=0){
        int delete = stack[top];
        top -= 1;
        return delete;
    }
    printf("Sorry, Empty Stack\n");
    return -1;
}
int peak(){
    if(top>=0){
        return stack[top];
    }
    printf("Empty Stack");
    return -1;
}

int main()
{
    // printf("%d\n", push(5));
    // printf("%d\n", push(10));
    // printf("%d\n", push(16));
    // printf("%d\n", push(16));
    printf("%d\n", push(5));
    pop(5);
    printf("Top %d\n", peak());

    return 0;
}