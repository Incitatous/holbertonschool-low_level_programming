#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - This is a function that prints a string
* Description: This function prints /
* whether n is positive or negative
* Return: Returns 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
