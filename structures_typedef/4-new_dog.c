#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (dog_t), or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;
	int i, len;

	/* Allocate memory for the struct */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* Copy name */
	if (name != NULL)
	{
		/* find length manually */
		for (len = 0; name[len]; len++)
			;
		name_copy = malloc(len + 1);
		if (name_copy == NULL)
		{
			free(d);
			return (NULL);
		}
		/* copy manually */
		for (i = 0; i <= len; i++)
			name_copy[i] = name[i];
	}
	else
		name_copy = NULL;

	/* Copy owner */
	if (owner != NULL)
	{
		for (len = 0; owner[len]; len++)
			;
		owner_copy = malloc(len + 1);
		if (owner_copy == NULL)
		{
			free(name_copy);
			free(d);
			return (NULL);
		}
		for (i = 0; i <= len; i++)
			owner_copy[i] = owner[i];
	}
	else
		owner_copy = NULL;

	/* Initialize struct */
	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}

