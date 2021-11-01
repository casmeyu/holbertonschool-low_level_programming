#include "dog.h"
#include <stdlib.h>
#include <string>
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
	char *s_name, *s_owner;
	dog_t *d;
	
	if (!name || !owner)
	{
		free(d);		
		return (NULL);
	}

	s_name = strcpy(s_name, name);
	if (!s_name)
	{
		free(d);
		return (NULL);
	}

	s_owner = strcpy(s_owner, owner);
	if(!s_owner)
	{
		free(s_name);
		free(d);
		return (NULL);
	}

	d.name = s_name;
	d.age = age;
	d.owner = s_owner;

}
