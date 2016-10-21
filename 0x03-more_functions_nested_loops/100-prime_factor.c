#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int prime_num;
	long n = 612852475143;

	prime_num = 2;
	while (prime_num < n)
	{
		if (n % prime_num == 0)
			n = n / prime_num;
		else
			prime_num++;
	}
	printf("%ld\n", n);
	return (0);
}
