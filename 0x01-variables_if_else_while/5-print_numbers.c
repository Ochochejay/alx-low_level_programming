#include <stdio.h>

/**
 * main - Prints all single digit of base 10 from 0 to stdout.
 * Return: 0 on success.
*/

int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');

	return (0);
}
