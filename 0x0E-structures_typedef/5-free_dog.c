#include "dog.h"

/**
 * free_dog - frees dog
 * @d: dog
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
