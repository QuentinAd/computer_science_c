// Implements a linked list by appending numbers
#include <stdio.h>
#include <stdlib.h>

typedef struct Node { // Node is mentioned here so you can mention it within the struct, as per order of execution
    int number;
    struct Node* next; // using Node struct to create a reference to next node address
} Node; // the alias to the Node struct

int main(int argc, char* argv[]) {
    // initialize the head of linked list, to overwrite garbage values
    Node* head = NULL;

    // loop through the command line arguments
    for (int i = 1; i < argc; i++) {
        
        // ASCII to int: atoi converts ASCII string to integer
        int input_nb = atoi(argv[i]);

        // dynamically allocate memory for new node
        Node* temp_node = malloc(sizeof(Node));
        // if allocation fails
        if (temp_node == NULL) {
            // free linked list
            free(temp_node);
            // error
            return 1;
        }
        
        // assign input_nb value to temp_node number field
        temp_node->number = input_nb;

        // assign NULL address to next reference of temp_node as it is appended at the end
        temp_node->next = NULL;
        
        // if list is empty
        if (head == NULL) {
            head = temp_node; // only node, assign NULL address, so first and last node
        } else { // if list is not empty
            // iterate over nodes to find the last node, starting from head node
            for (Node* ptr = head; ptr != NULL; ptr = ptr->next) {
                // if at last node
                if (ptr->next == NULL) {
                    // assign address of temp_node to next address of last node
                    ptr->next = temp_node;
                    break;
                }
            }
        }
    }

    // print the linked list
    for (Node* ptr = head; ptr != NULL; ptr = ptr->next) {
        printf("%i\n", ptr->number);
    }
    // free linked list
    free(head);
    return 0;
}