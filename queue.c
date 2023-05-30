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

bool isEmpty(){
    if(totalItem == 0){
        return true;
    }
    return false;
}

void enqeue(int item){
    if(isFull()){
        printf("Queue is Full.\n");
        return;
    }
    rear = (rear+1)%Capacity;
    queue[rear] = item;
    totalItem++;
}

int dequeue(){
    if(isEmpty){
        printf("Noting to Remove\n");
    }
    int frontItem = queue[front];
    queue[front] = -1;
    front = (front+1) % Capacity;
    totalItem++;
    return frontItem;
}

int main()
{
    enqeue(10);
    enqeue(15);
    enqeue(20);
    dequeue();

    return 0;
}