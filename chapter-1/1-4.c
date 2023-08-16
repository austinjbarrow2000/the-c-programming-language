#include <stdio.h>

#define LOWER 0   /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

int main(void)
{
    float fahr, celsius;

    celsius = LOWER;

    printf("Celsius\tFahrenheit\n");

    while (celsius <= UPPER)
    {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%10.0f\t%7.1f\n", fahr, celsius);
        celsius = celsius + STEP;
    }
    return 0;
}