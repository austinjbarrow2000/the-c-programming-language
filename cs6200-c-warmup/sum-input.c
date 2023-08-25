#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int main(int argc, char *argv[])
{
    assert(argc == 3);
    FILE *input = NULL;
    FILE *output = NULL;
    char *line = NULL;
    char *readInteger = NULL;
    int sum = 0;

    input = fopen(argv[1], "r");

    if (input == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    line = malloc(20000 * sizeof(char));

    while (fgets(line, 20000, input) != NULL)
    {
        sum = 0;
        readInteger = strtok(line, " ");

        while (readInteger != NULL)
        {
            sum += atoi(readInteger);
            readInteger = strtok(NULL, " ");
        }
        fprintf(output, "%i\n", sum);
    }

    free(line);
    line = NULL;

    fclose(input);
    input = NULL;

    fclose(output);
    output = NULL;
}
