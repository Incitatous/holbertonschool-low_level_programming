#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: ptr to char
 * @f: function
 * Return: result or NULL
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
