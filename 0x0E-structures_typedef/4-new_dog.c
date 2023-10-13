#include "dog.h"

/**
 * new_dog - Creates a new dog_t instance.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the newly created dog_t instance, or NULL if failed.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_length = 0, owner_length = 0, i;
	dog_t *new_dog;

	/* Calculate the lengths of name and owner */
	while (name[name_length++])
		;
	while (owner[owner_length++])
		;

	/* Allocate memory for the new dog_t instance */
	new_dog = (dog_t *) malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name and owner strings */
	new_dog->name = (char *) malloc(name_length * sizeof(char));
	new_dog->owner = (char *) malloc(owner_length * sizeof(char));

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		/* Memory allocation failed, free previously allocated memory and return NULL */
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}

	/* Copy the name and owner strings to the new dog */
	for (i = 0; i < name_length; i++)
		new_dog->name[i] = name[i];

	for (i = 0; i < owner_length; i++)
		new_dog->owner[i] = owner[i];

	/* Set the age of the new dog */
	new_dog->age = age;

	return (new_dog);
}
