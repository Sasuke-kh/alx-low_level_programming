#include <stdio.h>

/**
 * main - main function
 * @argc: count
 * @argv: vector
 * Return: 0 success
 */

int main(int argc, char const *argv[])
{
	int x = 0;
	while(argc--)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
