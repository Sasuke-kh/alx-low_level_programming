#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - passwords genarator
 *
 * Return: (0)
 */

int main(void)
{
	int pass;
	char x;

	srand(time(NULL));
	while (pass <= 2645)
	{
		x = rand() % 128;
		pass += x;
		putchar(x);
	}
	putchar(2772 - pass);
	return (0);
}
