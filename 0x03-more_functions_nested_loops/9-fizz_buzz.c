/**
* main - This is a function that prints a string
* Description: This function prints /
* Fizz, Buzz and Fizz Buzz when necessary
* Return: Returns 0
*/
#include <unistd.h>
#include <stdio.h>
int main(void)
{
	int c;

	c = 1;
	while (c <= 99)
	{
		if ((c % 3 == 0) && (c % 5 != 0))
			printf("Fizz ");
		else if ((c % 5 == 0 && c % 3 != 0))
			printf("Buzz ");
		else if ((c % 5 == 0) && (c % 3 != 0))
			printf("Fizz Buzz ");
		else
		{
			if (c > 9)
				putchar(c / 10 + '0');
			putchar(c % 10 + '0');
			printf(" ");
		}
		c++;
	}
	printf("Buzz\n");
	return (0);
}
