#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds two positive int
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error
 */
int main(int argc, char *argv[])
{
	int i, add, res;

	res = 0;
	i = 1;
	while (i < argc)
	{
		add = atoi(argv[i]);
		if (argc == 0)
		{
			add = 0;
		}
		if (add <= 0)
		{
			printf("Error\n");
			return (1);
		}
		res += add;
		i++;
	}
	printf("%d\n", res);
	return (0);
}
