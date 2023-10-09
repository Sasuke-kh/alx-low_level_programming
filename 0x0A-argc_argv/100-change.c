#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: count
 * @argv: vector
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int x, cent = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (x = 0; x < 5; x++)
		{
			if (money >= cents[x])
			{
				cent += money / cents[x];
				money = money % cents[x];
				if (money % cents[x] ==0)
				{
					break;
				}
			}
		}
		printf("%d\n", cent);
	}
	return (0);
}
