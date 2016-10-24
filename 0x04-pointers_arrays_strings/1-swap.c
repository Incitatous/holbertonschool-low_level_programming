/**
 * swap_int - swaps the values of two int
 * @a: first int value
 * @b: second int value
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
