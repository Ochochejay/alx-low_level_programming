#include "main.h"

/**
 * cap_string - capitalizes the first letter of all words.
 * @str: string to test.
 * Return: capatalized words.
 */

char *cap_string(char *str)
{
	int i, j, k;
	char sign[] = " \t\n,;.!?\"(){}";
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	i = j = 0;

	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sign[j])
			{
				for (k = 0; str[i + 1] != 0 && k < 26; k++)
				{
					if (str[i + 1] == lower[k])
						str[i + 1] = upper[k];
				}
			}
		}
		i++;
	}

	return (str);
}
