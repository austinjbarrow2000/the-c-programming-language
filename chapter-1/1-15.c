#include <stdio.h>

#define LOWER 0   /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

float convert(float);

int main(void)
{
    float fahr, celsius;

    celsius = LOWER;

    printf("Celsius\tFahrenheit\n");

    for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP)
    {
        fahr = convert(celsius);
        printf("%10.0f\t%7.1f\n", fahr, celsius);
    }

    return 0;
}

float convert(float celsius)
{
    return (9.0 / 5.0) * celsius + 32.0;
}