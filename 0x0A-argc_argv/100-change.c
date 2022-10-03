#include "main.h"

/**
 * main - Entry point.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on suucess else 1.
 */

int main(int argc, char *argv[])
{
	int n[] = {25, 10, 5, 2, 1};
	int i, j, ans, rem, coins;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);

	if (j < 0)
		printf("0\n");
	else
	{
		while (j != 0)
		{
			for (i = 0; i < 5; i++)
			{
				ans = j / n[i];
				rem = j % n[i];
				if (ans > 0)
				{
					coins += ans;
					j = rem;
					break;
				}
			}
		}

		printf("%d\n", coins);
	}

	return (0);
}
