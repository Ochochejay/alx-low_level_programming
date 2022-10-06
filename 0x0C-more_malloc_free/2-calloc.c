#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: num of elements
 * @size: bytes
 * Return: pointer on success or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = malloc(size);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
