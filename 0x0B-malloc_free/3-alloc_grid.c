#include "main.h"

/**
 * alloc_grid - allocates memory to a 2d array
 *
 * @width: columnn(s)
 * @height: row(s)
 *
 * Return: A pointer to the 2d array
 * Or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width < 1 || height < 1)
		return (NULL);

	a = malloc(height * sizeof(int *));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		*(a + i) = malloc(width * sizeof(int));
		if (*(a + i) == NULL)
		{
			free(*(a + i));
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}

	return (a);
}
