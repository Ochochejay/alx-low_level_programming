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

	i = count = 0;
	while ((s1[i] != s2[i]) && (*(s1 + i) != '\0' && *(s2 + i) != '\0'))
	{
		if (s1[i] > s2[i])
			count += 5;
		else if (s1[i] < s2[i])
			count -= 5;

		i++;
	}

	return (count);
}