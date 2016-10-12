#include <unistd.h>
/**
* main - This is a function that prints a string
* Description: This function prints /
* and that piece of art is useful - Dora Korpar, 2015-10-19
* Return: Returns 1
*/
int	main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
