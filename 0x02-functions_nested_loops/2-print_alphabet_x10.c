#include "main.h"
/**
 * main - entry point
 *
 * Description: print _putchar
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int line;
	int ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
			_putchar('\n');
	}
}
