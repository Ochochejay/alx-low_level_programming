#include "funtion_pointers.h"

/**
 * int_index - saerches for an integer
 * @array: array to search
 * @size: array size
 * @cmp: pointer to a func
 *
 * Return: index of the first element OR -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		int i;
		for (i = 0; i < size; i++)
		{
			if(cmp(array[i]) > 0)
				return (i);
		}
		return (-1)
	}
}
