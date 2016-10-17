/**
* main - This is a function that prints a string
* Description: This function prints /
* the alphabet in lowercase
* Return: Returns 0
*/
int	_putchar(char c);
int	main(void);
void	print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
