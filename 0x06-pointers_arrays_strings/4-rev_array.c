#include "main.h"

/**
 * reverse_array - reverses n element of an array.
 * @a: Array to reverse.
 * @n: number of elements to reverse.
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int tmp[100];

	i = j = 0;
	while (i < n)
	{
		tmp[i] = a[i];
		i++;
	}
	i--;

	while (j < n)
	{
		a[j] = tmp[i];

		++j;
		--i;
	}
}
