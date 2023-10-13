#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	while (s[length] != '\0')
		length++;

	return length;
}

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, const char *src)
{
	char *dest_start = dest;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return dest_start;
}

/**
 * new_dog - Creates a new dog_t instance.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the newly created dog_t instance, or NULL if failed.
 */
dog_t *new_dog(const char *name, float age, const char *owner)
{
	size_t name_length = _strlen(name);
	size_t owner_length = _strlen(owner);
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return NULL;

	new_dog->name = malloc((name_length + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return NULL;
	}

	new_dog->owner = malloc((owner_length + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return NULL;
	}

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return new_dog;
}
