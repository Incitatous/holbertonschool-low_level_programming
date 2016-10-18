#include "holberton.h"
/**
* _abs - Absolute value
* Description: This function computes /
* the absolute value of an integer
* @i: the input
* Return: Returns 0
*/
int _abs(int i)
{
	int j;

	j = (i * -10 / 10);
	if (i < 0)
		return (j);
	else if (i > 0)
		return (i);
	else
		return (0);
}
