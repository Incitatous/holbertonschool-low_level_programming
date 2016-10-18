/**
* _isalpha - This is a function that prints a string
* Description: This function checks /
* for lower case character
* @c: holds the value of letters
* Return: Returns 0
*/
#include "holberton.h"

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 132)
		return (1);
	else
		return (0);
	return (0);
}
