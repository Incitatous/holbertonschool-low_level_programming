#include <stdio.h>
/**
* main - This is a function that prints a string
* Description: This function prints /
* the alphabet in lowercase
* Return: Returns 0
*/
int	main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
