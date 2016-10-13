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
	int o;

	n = '0';
	o = '0';
	while (n <= '9')
	{
		while (o <= '9')
		{
			putchar(n);
			putchar(o);
			if (n == '9' && o == '9')
			{
				break;
			}
			putchar(',');
			putchar(' ');
			}
			o++;
		}
		o = '0';
		n++;
	}
	putchar('\n');
	return (0);
}
