#include<stdio.h>
#include<stdlib.h>

//tree structure
struct node{
    int item;
    struct node* left;
    struct node* right;
};

//create new node
struct node* createNode(value)
{
    struct node* newNode = malloc(sizeof(struct node));

    newNode -> item = value;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
};

//insert left
struct node* insertLeft(struct node* root, int value){
    root -> left = createNode(value);
    return root -> left;
};

//insert right
struct node* insertRight(struct node* root, int value){
    root -> right = createNode(value);
    return root -> right;
};

// traverse-inorder
void inorder(struct node* root){
    if(root == NULL) return;

    inorder(root -> left);
    printf("%d -> ", root -> item);
    inorder(root -> right);
}

// traverse-preorder
void preorder(struct node* root){
    if(root == NULL) return;

    printf("%d -> ", root -> item);
    preorder(root -> left);
    preorder(root -> right);
}

// traverse-postorder
void postorder(struct node* root){
    if(root == NULL) return;

    postorder(root -> left);
    postorder(root -> right);
    printf("%d -> ", root -> item);
}




int main()
{
    struct node* root = createNode(1);

    insertLeft(root, 12);
    insertRight(root, 9);

    insertLeft(root->left, 5);
    insertLeft(root->left, 6);

    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");

    return 0;
}