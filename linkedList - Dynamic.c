#include <stdio.h>
#include <stdlib.h>

// node
struct node {
    int value;
    struct node *next;
};

// create a new node
struct node* createNode(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

// insert at the beginning
struct node* insertAtBeginning(struct node* head, int value){
    struct node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
    return head;
}

// insert at the end
struct node* insertAtEnd(struct node* head, int value) {
    struct node* newNode = createNode(value);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    struct node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

// delete node
struct node* deleteNode(struct node* head, int value){
    if(head == NULL)
    {
        return head;
    }
    if(head->value == value)
    {
        struct node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct node* temp = head;
    
    while(temp->next != NULL && temp->next->value != value)
    {
        temp = temp->next;
    }
    if(temp->next == NULL)
    {
        return head;
    }

    struct node* deleteNode = temp->next;
    temp->next = temp->next->next;
    free(deleteNode);
    
    return head;
}

// free the memory
void freeList(struct node* head) {
    struct node* temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// print the list
void printList(struct node* head){
    while (head != NULL)
    {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}

// main
// main
int main()
{
    struct node* head = NULL;
    int option, value;

    do {
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Delete a node\n");
        printf("4. Print the list\n");
        printf("5. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("Enter the value to insert at the beginning: ");
                scanf("%d", &value);
                head = insertAtBeginning(head, value);
                break;

            case 2:
                printf("Enter the value to insert at the end: ");
                scanf("%d", &value);
                head = insertAtEnd(head, value);
                break;

            case 3:
                printf("Enter the value to delete: ");
                scanf("%d", &value);
                head = deleteNode(head, value);
                break;

            case 4:
                printf("List: ");
                printList(head);
                break;

            case 5:
                freeList(head);
                exit(0);

            default:
                printf("Please try again.\n");
                break;
        }
    }while(1);

    return 0;

}
