#include <unistd.h>
/**
* main - This is a function that prints a string
* Description: This function prints /
* and that piece of art is useful - Dora Korpar, 2015-10-19
* Return: Returns 0
*/
int	main(void)
{
	write(1, "and that piece of art is useful - Dora Korpar, 2015-10-19", 5);
	return (0);
}
