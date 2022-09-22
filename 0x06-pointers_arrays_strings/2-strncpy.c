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
	int i, j;
	char *tmp;

	i = j = 0;
	tmp = dest;

	while (dest[j] != 0)
		j++;

	while (i < n && dest[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < j && tmp[i] != 0)
	{
		dest[i] = tmp[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
