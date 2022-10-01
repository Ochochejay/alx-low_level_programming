#include "main.h"

/**
 * _strcmp - Compares two string.
 * @s1: first string.
 * @s2: second string.
 * Return: count.
 */

int _strcmp(char *s1, char *s2)
{
	int i, count;

	i = 0;

	while ((*(s1 + i) != '\0' && *(s2 + i) != '\0') && s1[i] == s2[i])
		i++;

	count = s1[i] - s2[i];
	return (count);
}
