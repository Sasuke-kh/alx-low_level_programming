#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * int_dog - dog info
 * @d: the dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
