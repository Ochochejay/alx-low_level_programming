#include "main.h"

/**
 * _strlen - calculates str length
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	if (s == NULL || *s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *c;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	c = malloc(sizeof(char) * (len1 + len2 + 1));

	if (c == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		c[i] = s1[i];

	if (len2 == 0)
		c[i] = '\0';

	for (j = 0; j < len2; j++)
		c[i + j] = s2[j];

	c[i + j] = '\0';

	return (c);
}
