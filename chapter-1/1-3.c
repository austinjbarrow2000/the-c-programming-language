#include <stdio.h>

#define LOWER 0   /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

int main(void)
{
    float fahr, celsius;

    fahr = LOWER;

    printf("Fahrenheit\tCelsius\n");

    while (fahr <= UPPER)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%10.0f\t%7.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
    return 0;
}