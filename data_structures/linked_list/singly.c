// Singly Linked List Implementation (Append, Prepend, Print)
#include <stdio.h>
#include <stdlib.h>

// Define a node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to append a node to the linked list
void append(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to prepend a node to the linked list
void prepend(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    Node* head = NULL;
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    prepend(&head, 5);
    printList(head);
    return 0;
}