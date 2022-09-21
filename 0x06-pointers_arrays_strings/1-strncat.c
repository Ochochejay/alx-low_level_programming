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
	int i, a, b;

	i = 0;

	while (dest[i] != 0)
		i++;

	for (a = i, b = 0; b < n; a++, b++)
		dest[a] = src[b];

	dest[a] = 0;

	return (dest);
}
