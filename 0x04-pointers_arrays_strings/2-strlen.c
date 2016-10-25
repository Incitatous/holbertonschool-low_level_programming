/**
 * _strlen - Returns length of string
 * @s: pointer to string
 * Return: Length of string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\n')
	{
		i++;
	}
	return (s[i]);
}
