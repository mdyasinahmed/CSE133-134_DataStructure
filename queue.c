#include <stdio.h>
#include <stdbool.h>
#define Capacity 5

int queue[Capacity];
int front = 0, rear = 0, totalItem = 0;

bool isFull(){
    if(totalItem == Capacity){
        return true;
    }
    return false;
}

void enque(int item){
    if(isFull){
        printf("Queue is Full.\n");
    }
}

int dequeue(){

    return 0;
}

int main()
{

    return 0;
}