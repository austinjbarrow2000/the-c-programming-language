#include <stdio.h>
void escape(char[], char[]);
void escapeRev(char[], char[]);

void escape(char s[], char t[])
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; ++i)
    {
        switch (s[i])
        {
        case '\n':
            t[j++] = '\n';
            break;
        case '\t':
            t[j++] = '\t';
            break;
        default:
            t[j++] = s[i];
            break;
        }
    }
    t[j] = '\0';
    printf("%s\n", t);
}

void escapeRev(char t[], char s[])
{
    int i, j;

    for (i = j = 0; t[i] != '\0'; ++i, ++j)
        switch (t[i])
        {
        case '\t':
            s[j] = '\\';
            s[++j] = 't';
            break;
        case '\n':
            s[j] = '\\';
            s[++j] = 'n';
            break;
        default:
            s[j] = t[i];
            break;
        }
    s[j] = '\0';
    printf("%s\n", t);
}

int main()
{
    char string1[] = {"clean\n\tthis\n\t\tstring\n"};
    char string2[1000];
    char string3[] = {"clean    this    string"};
    escape(string1, string2);
    escapeRev(string3, string2);
    return 0;
}