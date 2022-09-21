#include "main.h"

/**
 * _strncpy - copy n part of a string to another.
 * @dest: first string.
 * @src: second string.
 * @n: part to copy.
 * Return: copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *tmp;
	int i, j, k;

	i = j = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	tmp = dest;
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}

	for (k = n; k < i; k++)
		dest[k] = tmp[k];

	dest[k] = 0;
	return (dest);
}
