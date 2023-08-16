#include <stdio.h>

#define BLANK 0
#define LETTER 1

int main()
{
    int c, state;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            putchar(c);
            state = LETTER;
        }
        else
        {
            if (state != BLANK)
            {
                putchar(c);
            }
            state = BLANK;
        }
    }
    return 0;
}