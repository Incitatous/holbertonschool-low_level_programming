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
	int p;

	n = '0';
	o = '1';
	p = '2';
	while (n <= '7')
	{
		while (o <= '8')
		{
			while (p <= '9')
			{
				if (n < o && o < p)
				{
					putchar(n);
					putchar(o);
					putchar(p);
					if (n != '7' || o != '8' || p != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
				p++;
			}
			p = '0';
			o++;
		}
		o = '0';
		n++;
	}
	putchar('\n');
	return (0);
}
