#include "holberton.h"

/**
 * _print_rev__recursion - prints a string
 * @s: pointer to string
 * Return: result
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
