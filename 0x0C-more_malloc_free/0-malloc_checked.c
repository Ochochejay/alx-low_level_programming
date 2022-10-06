#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: Bytes to allocate
 * Return: pointer to the new memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
