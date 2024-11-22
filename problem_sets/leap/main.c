#include <stdio.h>
#include "leap.h"

int main() {
    int year = 2000; 

    if (is_leap_year(year))
        printf("is a leap year\n");
    else 
        printf("is not a leap year\n");
    return 0;
}