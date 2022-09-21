#include "main.h"

/**
 * _strcat - concatenates one string to the other.
 * @dest: first string.
 * @src: second string.
 * Return: first string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, a, b;

	i = j = 0;
	while (dest[i] != 0)
		i++;

	while (src[j] != 0)
		j++;

	k = i + j;

	for (a = i, b = 0; a < k && b < j; a++, b++)
		dest[a] = src[b];

	dest[a] = 0;

	return (dest);
}
