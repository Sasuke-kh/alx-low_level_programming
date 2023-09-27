#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: type char
 * Return: s which is
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 0; x++)
	{
		for (y = 0; y < 0; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
