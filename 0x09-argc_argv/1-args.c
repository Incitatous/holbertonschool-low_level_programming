#include <stdio.h>
/**
 * main - Prints argc execpt executable
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
/*specifies *argv[] as unused*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
