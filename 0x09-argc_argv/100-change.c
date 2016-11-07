#include <stdio.h>
#include <stdlib.h>
/**
 * main - Changes cents
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error
 */
int main(int argc, char *argv[])
{
	int i, cents;

	i = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents > 24)
			cents -= 25, i++;
		while (cents > 9)
			cents -= 10, i++;
		while (cents > 4)
			cents -= 5, i++;
		while (cents > 1)
			cents -= 2, i++;
		while (cents == 1)
			cents -= 1, i++;
		printf("%d\n", i);
	}
	return (0);
}
