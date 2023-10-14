#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name to print
 * @f: print function
 * Return: void nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
