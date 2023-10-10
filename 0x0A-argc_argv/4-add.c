#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
    int i, num, sum = 0;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    for (i = 1; i < argc; i++)
    {
        num = atoi(argv[i]);

        if (num == 0 && argv[i][0] != '0')
        {
            printf("Error\n");
            return (1);
        }

        if (num < 0)
        {
            printf("Error\n");
            return (1);
        }

        sum += num;
    }

    printf("%d\n", sum);
    return (0);
}
