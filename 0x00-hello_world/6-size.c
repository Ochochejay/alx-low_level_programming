#include <stdio.h>

/**
 * Description: main - Prints sizes of data types to stdout.
 * Return: 0 if success.
*/

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(char));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long: %d bytes(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}