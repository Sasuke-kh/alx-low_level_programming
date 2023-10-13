#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog_t instance.
 * @name: Pointer to the name string.
 * @age: Age of the dog.
 * @owner: Pointer to the owner string.
 *
 * Return: Pointer to the newly created dog_t instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t name_length, owner_length;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_length = strlen(name);
	owner_length = strlen(owner);

	new_dog->name = malloc((name_length + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc((owner_length + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strncpy(new_dog->name, name, name_length);
	new_dog->name[name_length] = '\0';

	strncpy(new_dog->owner, owner, owner_length);
	new_dog->owner[owner_length] = '\0';

	new_dog->age = age;

	return (new_dog);
}
