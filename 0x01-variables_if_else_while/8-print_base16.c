#include <stdio.h>
/**
* main - This is a function that prints a string
* Description: This function prints /
* the alphabet in lowercase
* Return: Returns 0
*/
int	main(void)
{
	int n;
	char c;

	n = '0';
	c = 'a';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
