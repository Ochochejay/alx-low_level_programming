#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first element
 * @max: last element
 * Return: array on success or NULL on failure
 */

int *array_range(int min, int max)
{
	int i, len;
	int *arr;

	if (min > max)
		return (NULL);

	i = min, len = 0;

	for (; i <= max; i++)
		len++;

	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++, min++)
		arr[i] = min;

	return (arr);
}
