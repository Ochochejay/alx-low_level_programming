#include "main.h"

/**
 * strtow - splits strings into a word
 * @str: string
 * Return: pointer or NULL
 */

char **strtow(char *str)
{
	char **arr;
	int i, j, k, l, count;

	count = k = j = 0;
	if (!str || !*str || str == " ")
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	arr = malloc(sizeof(char *) * (count + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			k++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				arr[j] = malloc(sizeof(char) * (k + 1));
				if (arr[j] == NULL)
				{
					for (l = 0; l < j; l++)
						free(arr[l]);
					free(arr);
					return (NULL);
				}
				for (l = 0; l < k; l++)
					arr[j][l] = str[i - k + 1 + l];
				arr[j][l] = '\0';
				j++;
				k = 0;
			}
		}
	}
	arr[count] = '\0';
	return (arr);
}
