#include <stdio.h>
/**
* main - This is a function that prints a string
* Description: This function prints /
* all different combination of two two-digit nb
* Return: Returns 0
*/
int	main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar (' ');
			putchar (j / 10 + '0');
			putchar (j % 10 + '0');
				if (!(j == 99 && i == 98))
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
