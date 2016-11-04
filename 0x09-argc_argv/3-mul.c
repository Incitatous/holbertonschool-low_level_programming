#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two int
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x, y, res;

	x = y = res = 0;
	if (argc == 3)
	{	
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		res = x * y;
		printf("%i\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
