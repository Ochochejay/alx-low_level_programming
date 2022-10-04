#include "main.h"

/**
 * _strdup - duplicates a string
 *
 * @str: original string
 *
 * Return: a pointer to the new string or NULL
 * if error is found.
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, j;

	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	new_str = malloc(i);

	for (j = 0; j < i; j++)
		newstr[j] = str[j];

	return (new_str);
	free(new_str);
}
