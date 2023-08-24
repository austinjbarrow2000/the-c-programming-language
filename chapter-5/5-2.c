#include <stdio.h>
#include <ctype.h>

// To change it to getfloat, all you have to to do is change int n to float and array to
// float. Then, you take into account the decimal place in the code. GetFloat should still return in int
// since this is returning the status of the input, not the value of the float that we got. That goes into the array
// that we passed in.

int main()
{
    int n, array[100], getint(int *);

    for (n = 0, n < 100 && getint(&array[n]) != EOF; n++)
        ;
}

int getch(void);
void ungetch(int);

int getint(int *pn)
{
    int c, sign;

    while (isspace(c = getch()))
        ;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-')
    {
        ungetch(c);
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
    {
        c = getch();
    }

    for (*pn = 0; isdigit(c); c = getch())
    {
        *pn = 10 * *pn + (c - '0');
    }

    *pn *= sign;
    if (c != EOF)
    {
        ungetch(c);
    }

    return c
}