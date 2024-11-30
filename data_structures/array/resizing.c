
#include <stdio.h> // for printf
#include <stdlib.h> // for malloc

int main(void) {
    int original_array_size = 3;
    int *arr = malloc(original_array_size * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    // initialize the array manually using pointer arithmetic
    *(arr + 0) = 1;
    *(arr + 1) = 2;
    *(arr + 2) = 3;

    // print each value of the array looping over each element
    printf("Original array:\n");
    for (int i = 0; i < original_array_size; i++){
        printf("%i\n", *(arr + i));
    }

    // for the sake of example, let's resize the array using a temporary array
    int new_array_size = 5;
    int *temp = malloc(new_array_size * sizeof(int));
    if (temp == NULL) {
        free(arr); // free the original array to avoid memory leaks
        return 1;
    }
    
    // copy the values from the original array to the temp array
    for (int i = 0; i < original_array_size; i++){
        *(temp + i) = *(arr + i);
    }
    // IMPORTANT: your temp array is now filled with the values from the original array 
    // BUT remember that the size of your temp array is bigger than the original array
    // SO the extra allocated memory contains garbage values

    // add your own values to the temp array
    *(temp + 3) = 4;
    *(temp + 4) = 5;

    // free the original array
    free(arr);

    // point arr to the temp array
    arr = temp;

    // print each value of the array looping over each element
    printf("Resized array:\n");
    for (int i = 0; i < new_array_size; i++){
        printf("%i\n", *(arr + i));
    }

    // free the array
    free(arr);
    return 0;
}