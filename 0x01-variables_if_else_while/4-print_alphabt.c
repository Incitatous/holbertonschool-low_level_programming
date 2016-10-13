#include <stdio.h>
/**
* main - This is a function that prints a string
* Description: This function prints /
* the alphabet in lowercase except q and e
* Return: Returns 0
*/
int	main(void)
{
	char c;
	c = 'a';
	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		{
			c++;
		}
		else
		{	
		putchar(c);
		c++;
		}
	}
	putchar('\n');
	return (0);
}
