#include <stdio.h>
/**
* main - This is a function that prints a string
* Description: This function prints /
* base numbers separated by a comma and space
* Return: Returns 0
*/
int	main(void)
{
	int n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		if (n < '9')
		{
		putchar(',');
		putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
