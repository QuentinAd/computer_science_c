// Dereferencing a variable using pointers
#include <stdio.h>

int main() {
    // variable declarations
    int x;
    int* ptr;
    // variable initializations (being obvious here for the sake of the example)
    x = 10;
    ptr = &x;
    
    printf("Value of x is manually initialized to: %i\n", x);
    printf("Address of x is: %p\n", &x);
    printf("Value of ptr is the address of x: %p\n", ptr);
    printf("Value of *ptr is the value of x: %i\n", *ptr);
    
    *ptr = 20;
    printf("Value of *ptr is manually changed to: %i\n", *ptr);
    printf("Value of x becomes: %i\n", x);

    x = 30;
    printf("Value of x is manually changed to: %i\n", x);
    printf("Value of *ptr becomes: %i\n", *ptr);

    return 0;
} 