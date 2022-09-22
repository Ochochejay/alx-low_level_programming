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
	int i;

	i = 0
	while (dest[i] != 0)
	{
		if (i < n)
			dest[i] = src[i];
		i++;
	}


	dest[i] = '\0';
	return (dest);
}
