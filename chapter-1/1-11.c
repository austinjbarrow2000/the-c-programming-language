#include <stdio.h>

#define NEWLINE 0
#define WORD 1

int main()
{
    int c, state;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t' || c == '\n' || c == ' ')
        {
            state = NEWLINE;
        }
        else if (state != NEWLINE)
        {
            state = WORD;
            putchar(c);
        }
        else
        {
            putchar('\n');
            putchar(c);
            state = WORD;
        }
    }
    return 0;
}