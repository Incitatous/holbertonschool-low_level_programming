#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - Prints strings
 * @separator: string between numbers
 * @n: number of integers
 * Return: Result or 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *storage;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		storage = va_arg(ap, char *);
		if (storage == NULL)
			printf("(nil)");
		else
			printf("%s", storage);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
