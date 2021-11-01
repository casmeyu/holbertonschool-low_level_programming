#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new instance of the dog structure
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: a new instance dog}
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = strdup(name);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	d->owner = strdup(owner);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
