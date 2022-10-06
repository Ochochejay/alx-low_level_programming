#include "main.h"

/**
 * _strlen - calculates a string length
 * @s: string
 * Return: length or NULL on failure
 */

int _strlen(char *s)
{

	if (s == NULL || *s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * string_nconcat - concatenate nbytes of s2 to s1
 * @s1: first string
 * @s2: second string
 * @n: bytes
 * Return: NULL on failure or a new pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2, str_len;
	char *str;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		str_len = len1 + len2;
	else
		str_len = len1 + n;

	str = malloc(sizeof(char) * (str_len + 1));

	if (str == NULL)
		return (NULL);

	len2 = str_len - len1;

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < len2; j++)
		str[i + j] = s2[j];

	return (str);
}
