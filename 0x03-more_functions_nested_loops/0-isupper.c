/**
* _isupper - This is a function that prints a string
* Description: This function checks /
* for uppercase characters
* @c: holds the value of letters
* Return: Returns 0
*/
#include "holberton.h"
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
