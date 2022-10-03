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
	int i, j, k, ans, rem, coins;

	coins = k = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);
	if (j < 0)
	{
		j *= -1;
		k++;
	}

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

	if (k > 0)
		putchar('-');

	printf("%d\n", coins);

	return (0);
}
