#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - this function frees dogs
 *
 * @d: dog to be freed
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
