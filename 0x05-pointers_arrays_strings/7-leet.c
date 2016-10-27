#include "holberton.h"
/**
 * leet - "Encodes" into 1337
 * @a: character
 * Return: a
 */
char *leet(char *a)
{
	int i;
	int j;
	char numbers[] = "4307143071";
	char letters[] = "aetolAETOL";

	i = 0;
	while (a[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (letters[j] == a[i])
				(a[i] = numbers[j]);
			j++;
		}
		i++;
	}
	return (a);
}
