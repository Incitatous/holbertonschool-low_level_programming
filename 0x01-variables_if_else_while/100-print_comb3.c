#include <stdio.h>
/**
* main - This is a function that prints a string
* Description: This function prints /
* all different combination of two digits
* Return: Returns 0
*/
int	main(void)
{
	int n;
	int o;

	n = '0';
	o = '1';
	while (n <= '8')
	{
		while (o <= '9')
		{
			if (n < o)
			{
				putchar(n);
				putchar(o);
				if (n != '8' || o != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			o++;
		}
		o = '0';
		n++;
	}
	putchar('\n');
	return (0);
}
