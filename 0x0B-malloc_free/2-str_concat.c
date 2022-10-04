#include "main.h"

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
	int i, j;
	char tmp[100];
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		tmp[i] = s1[i];

	for (j = 0; s2[j]; j++, i++)
		tmp[i] = s2[j];

	c = malloc(++i);

	if (c == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		c[j] = tmp[j];

	return (c);
}
