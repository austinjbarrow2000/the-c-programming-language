#include <stdio.h>

void reverse(char[]);

void reverse(char word[])
{
    int i, j, len;
    char temp;

    for (i = 0; word[i] != '\0'; ++i)
    {
        ++len;
    }

    for (i = 0, j = len - 1; i < j; ++i, --j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    printf("%s\n", word);
}

int main()
{
    char string[100] = "hello";

    reverse(string);
    return 0;
}