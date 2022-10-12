#include "function_pointers.h"

/**
 * array_iterator - executes a func given as a parameter
 * on each element of an arry
 *
 * @array: array
 * @size: array size
 * @action: pointer to a func
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
