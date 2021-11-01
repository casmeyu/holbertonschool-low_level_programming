#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string to copy
 *
 * Return: *ptr to the duplicate string or NULL if it failed
 */
char *_strdup(char *str)
{
	unsigned int pos, len;
	char *dup;

	if (!str)
		return (NULL);

	for (len = 0; str[len] != 0;)
		len++;

	dup = (char *)malloc((sizeof(char) * len + 1));

	if (dup == NULL)
		return (NULL);

	for (pos = 0; pos <= len; pos++)
	{
		dup[pos] = str[pos];
	}

	return (dup);
}
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

	d->name = _strdup(name);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	d->owner = _strdup(owner);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
