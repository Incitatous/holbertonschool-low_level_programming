/**
 * reset_to_98 - updates the value of param to 98
 * @s: pointer to string
 * Return: Always 0.
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
