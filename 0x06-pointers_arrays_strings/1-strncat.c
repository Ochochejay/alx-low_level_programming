#include "main.h"

/**
 * _strncat - concatenates two strings, using n bytes from src.
 * @dest: first string.
 * @src: second string.
 * @n: Integer to test.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != 0)
		i++;

	while(j < n && src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = 0;

	return (dest);
}
