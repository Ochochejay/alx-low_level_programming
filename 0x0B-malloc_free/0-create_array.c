#include "main.h"

/**
 * create_array - creates an array chars and
 * initializes it with a specific char
 *
 * @size: array size
 * @c: character
 *
 * Return: NULL if size is 0 or malloc is Null OR
 * pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *c_ptr;
	int i;

	c_ptr = malloc(sizeof(char) * size);

	if (size == 0 || c_ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		c_ptr[i] = c;

	return (c_ptr);
}
