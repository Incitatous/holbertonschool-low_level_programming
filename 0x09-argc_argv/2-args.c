#include <stdio.h>
/**
 * main - Prints arguments
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
/*specifies *argv[] as unused*/
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
