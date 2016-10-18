#include "holberton.h"

/**
* _abs - Absolute value
* Description: This function computes /
* the absolute value of an integer
* @i: the input
* Return: Returns i or j
*/
int _abs(int i)
{
	int j;

	j = (i * -1);
	if (i < 0)
		return (j);
	else
		return (i);
}
