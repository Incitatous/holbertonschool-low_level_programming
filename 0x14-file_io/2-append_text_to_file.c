#include "holberton.h"
/**
 * append_text_to_file - appends text to a file
 *
 * @filename: SE
 * @text_content: SE
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor, i, count;

	i = 0;
	if (!filename)
		return (-1);
	fileDescriptor = open(filename, O_RDWR | O_APPEND);
	if (fileDescriptor == -1)
		return (-1);
	if (!text_content)
	{
		close(fileDescriptor);
		return (1);
	}
	while (text_content[i] != '\0')
		i++;
	if (i > 0)
		count = write(fileDescriptor, text_content, i);
	if (count == -1)
		return (-1);
	close(fileDescriptor);
	return (1);
}
