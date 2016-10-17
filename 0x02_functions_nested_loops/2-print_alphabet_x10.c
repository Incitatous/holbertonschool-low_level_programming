/**
* main - This is a function that prints a string
* Description: This function prints /
* the alphabet 10 times
* Return: Returns 0
*/
int	_putchar(char c);
int	main(void);
void	print_alphabet(void);
void	print_alphabet_x10(void)
{
	int i;
	char c;

	i = '0';
	c = 'a';
	while (i <= '9')
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		i++;
		_putchar('\n');
	}
}
