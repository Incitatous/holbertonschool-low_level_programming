/**
* _isdigit - This is a function that returns 0 or 1
* Description: This function checks /
* for uppercase characters
* @c: holds the value of digits
* Return: Returns 0 or 1
*/
#include "holberton.h"
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
