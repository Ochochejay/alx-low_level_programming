#include <stdio.h>

/**
 * main - print numbers to stdout
 * Return: 0 on success.
*/

int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
