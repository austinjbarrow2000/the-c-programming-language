#include <stdio.h>

int main(void)
{
    int value, c;
    c = getchar();
    value = (c != EOF);
    printf("%i\n", value);
    putchar(c);
    return 0;
}