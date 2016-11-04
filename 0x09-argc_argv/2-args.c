#include <stdio.h>
/**
 * main - Prints arguments
 *
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
