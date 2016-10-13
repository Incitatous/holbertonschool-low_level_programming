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

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
