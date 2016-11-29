#include <stdio.h>
/**
 * before - Prints a string before the main executes
 *
 * Return: None
 */
void before (void) __attribute__ ((constructor));

void before (void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
