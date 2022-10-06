#include "main.h"

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to the memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: new pointer on success or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *n_ptr;

	if (new_size > old_size || ptr == NULL)
	{
		n_ptr = malloc(new_size);
		if (n_ptr == NULL)
			return (NULL);

		free(ptr);
	}

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size == old_size)
	{
		return (ptr);
	}

	return (n_ptr);
}
