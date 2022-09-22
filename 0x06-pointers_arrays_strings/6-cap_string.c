#include "main.h"

/**
 * cap_string - capitalizes the first letter of all words.
 * @str: string to test.
 * Return: capatalized words.
 */

char *cap_string(char *str)
{
	int i;
	char lower, upper;

	lower = 'a', upper = 'A';
	i = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!')
		{
			while (str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')')
			{
/**
				if (str[i] == '{' || str[i] == '}')
				{*/
					while (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					{
						if (str[i + 1] == lower)
							str[i + 1] = upper;

						lower++, upper++;
					}
			}
		}

		lower = 'a', upper = 'A';
		i++;
	}


	return (str);
}
