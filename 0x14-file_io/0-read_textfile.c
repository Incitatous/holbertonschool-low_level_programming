#include "holberton.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fileDescriptor;
	ssize_t count, checkCount;
	
	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}
	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
	{
		free(buffer);
		return (0);
	}
	count = read(fileDescriptor, buffer, letters);
	if (count == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	/* same as write(1, file, number of characters)*/
	checkCount = write(STDOUT_FILENO, buffer, count);
	if (checkCount == -1 || (count != checkCount))
	{
		free(buffer);
		return (0);
	}
	close(fileDescriptor);
	return (checkCount);
}
