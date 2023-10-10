#include <stdio.h>

/**
 * main - main function
 * @argc: count
 * @argv: vector
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
	}
	else
	{
		printf("error");
		return (1);
	}
	return (0);
}
