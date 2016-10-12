#include <unistd.h>
/**
* main - This is a function that prints a string
* Description: This function prints /
* "with proper grammar, but the outcome is a piece of art
* Return: Returns 0
*/
int	main(void)
{
	write(1, "with proper grammar, but the outcome is a piece of art,\n", 56);
	return (0);
}
