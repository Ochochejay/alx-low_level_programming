#include <stdio.h>


void puts2(char *str)
{
	int i = 0, len = 0, j;
	while (str[i] != 0)
	{
		len++;
		i++;
	}
	for (j = 0; j < len; j += 2)
		printf("%c", str[j]);
	putchar('\n');
}
int main(void)
{
	char *str;
	 
	str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\0Holberton";
	puts2(str);
	return (0);
}	
