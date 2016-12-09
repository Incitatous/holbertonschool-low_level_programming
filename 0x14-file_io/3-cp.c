#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * @ac: SE
 * @av: SE
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int source, dest, store_source, store_dest;
	char buffer[1204];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to"), exit(97);
	source = open(av[1], O_RDONLY);
	if (source == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	dest = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, S_IREAD
	| S_IWRITE | S_IRGRP | S_IWGRP | S_IROTH);
	if (dest == -1)
		dprintf(STDERR_FILENO, "Can't write to %s\n", av[2]), exit(99);
	store_source = read(source, buffer, 1204);
	if (store_source == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	while (store_source > 0)
	{
		if (store_source > 0)
		{
			store_dest = write(dest, buffer, (ssize_t)store_source);
			if (store_dest == -1)
				dprintf(STDERR_FILENO, "Can't write to %s\n", av[2]), exit(99);
		}
		store_source = read(source, buffer, 1204);
		if (store_source == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	if (close(source) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source), exit(100);
	if (close(dest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);
	return (0);
}
