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

	new_str = malloc(++i);

	if (new_str == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		new_str[j] = str[j];

	return (new_str);
	free(new_str);
}
