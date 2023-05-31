#include <stdio.h>
#include <stdlib.h>

//node
struct node{
    int item;
    struct node* left;
    struct node* right;
};
//new-node
struct node* createNode(value){

    struct node* newNode = malloc(sizeof(struct node));

    newNode -> item = value;
    newNode -> left = NULL;
    newNode -> right = NULL;
};
//insert-left
//insert-right
//traversal - // in-order

            // pre-order
            // post-order
//call in main