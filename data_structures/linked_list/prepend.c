// Implements a linked list by prepending numbers
#include <stdio.h>
#include <stdlib.h>

typedef struct Node { // Node is mentioned here so you can mention it within the struct, as per order of execution
    int number;
    struct Node* next; // using Node struct to create a reference to next node
} Node; // the alias to the Node struct

int main(int argc, char* argv[]) {
    // initialize the head and tail of the linked list, to overwrite garbage values
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

        // assign address of first node to next reference of temp_node as it is prepended at the start
        temp_node->next = head;
        
        // assign address of temp_node to head (first node) of linked list
        head = temp_node;
    }

    // print the linked list
    for (Node* ptr = head; ptr != NULL; ptr = ptr->next) {
        printf("%i\n", ptr->number);
    }

    return 0;
}