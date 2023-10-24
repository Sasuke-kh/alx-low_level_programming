#include <stdio.h>

/**
 * beforeMain - brints before main function
 */

void __attribute__((constructor)) beforeMain(void)
{
	printf("You're beat! and yet, you must");
	printf(" allow,\nI bore my house upon my back!\n");
}
