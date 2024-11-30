#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main(void)
{
    /* variable declarations */
    int fahr, celsius;
    int lower, upper, step;
    /* variable initializations */
    lower = 0; /* lower limit */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;
    /* print table header */
    printf("Fahren\tCelsius\n");
    /* while loop */
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9; 
        printf("%d\t%d\n", fahr, celsius); 
        fahr = fahr + step;
    }
    return 0;
}