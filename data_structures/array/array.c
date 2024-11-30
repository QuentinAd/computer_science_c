
#include <stdio.h> // for printf
#include <stdlib.h> // for malloc

int main(void) {
    // initialize the array
    int *arr = malloc(3 * sizeof(int));
    // if allocation fails
    if (arr == NULL) {
        return 1;
    }
    // initialize the array manually using pointer arithmetic
    *(arr + 0) = 1; // arr[0]
    *(arr + 1) = 2; // arr[1]
    *(arr + 2) = 3; // arr[2]

    // print each value of the array
    for (int i = 0; i < 3; i++){
        printf("%i\n", *(arr + i));
    }
}