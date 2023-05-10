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
struct node* insertAtBeginning(struct node* head, int value) {
    struct node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
    return head;
}

// insert at the end
struct node* insertAtEnd(struct node* head, int value) {
    struct node* newNode = createNode(value);
    if (head == NULL) {
        head = newNode;
        return head;
    }
    struct node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// delete node
struct node* deleteNode(struct node* head, int value) {
    if (head == NULL) {
        return head;
    }
    if (head->value == value) {
        struct node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct node* temp = head;
    while (temp->next != NULL && temp->next->value != value) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
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
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// print the list
void printList(struct node* head) {
    while (head != NULL) {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}

// Main function
int main() {
    struct node* head = NULL;
    head = insertAtEnd(head, 5);
    head = insertAtEnd(head, 8);
    head = insertAtEnd(head, 11);
    head = insertAtEnd(head, 15);
    head = insertAtEnd(head, 18);
    printf("Original list: ");
    printList(head);

    head = insertAtBeginning(head, 2);
    printf("List after inserting 2 at the beginning: ");
    printList(head);

    head = deleteNode(head, 11);
    printf("List after deleting node with value 11: ");
    printList(head);

    freeList(head);
    return 0;
}
