#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints an instance of the dog strcture
 *
 * @d: entering dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");

		if (d->age)
			printf("Age: %f\n", d->age);

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)");

	}
}
