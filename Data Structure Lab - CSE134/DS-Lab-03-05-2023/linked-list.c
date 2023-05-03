#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    struct node *four = NULL;
    struct node *five = NULL;

    // Memory Location
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));
    five = malloc(sizeof(struct node));

    // Assign Value
    one -> value = 5;
    two -> value = 8;
    three -> value = 11;
    four -> value = 15;
    five -> value = 18;

    // Connect Node
    one -> next = two;
    two -> next = three;
    three -> next = four;
    four -> next = five;
    five -> next = NULL;

    // Save to head
    head = one;

    LinkedList(head);

}
// Create Node
struct node
{
    int value;
    struct node *next;
};
// Print
void LinkedList(struct node *headValue){
    while(headValue != NULL){
        printf("%d ", headValue->value);
        headValue = headValue -> next;
    }
}

