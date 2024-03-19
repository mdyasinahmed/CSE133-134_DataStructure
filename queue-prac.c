#include<stdio.h>
#include<stdbool.h>
#define s 5

int queue[s];
int front = 0, rear =-1, totalItem = 0;

bool Full(){
    if(totalItem == s){
        return true;
    }
    return false;
}

bool Empty(){
    if(totalItem==0){
        return true;
    }
    return false;
}

void enqueue(int x){
    if(Full()){
        printf("No Spaces\n");
        return;
    }
    rear = (rear+1) % s;
    queue[rear] = x;
    totalItem++;
}

int dequeue(){
    if(Empty()){
        printf("Nothing to Delete.\n");
        return -1;
    }
    int frontItem = queue[front];
    queue[front] = -1;
    front = (front+1) % s;
    totalItem--;

    return frontItem;
}

int printQueue(){
    int i;
    printf("Queue: ");
    for(i=0;i<s;i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}


int main()
{
    printQueue();
    enqueue(10);
    printQueue();
    dequeue();
    printQueue();

    return 0;
}