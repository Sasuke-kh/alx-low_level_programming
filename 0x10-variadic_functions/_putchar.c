#include <unistd.h>
#include "variadic_functions.h"
/**
 * main - entry point
 *
 * Description: print _putchar
 *
 * Return: 0 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
