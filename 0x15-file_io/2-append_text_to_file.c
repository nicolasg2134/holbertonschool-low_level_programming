#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: Filename
 * @text_content: Text to add to the file.
 *
 * Return: 1 - Success or -1 - Failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrote, aux;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (aux = 0; text_content[aux] != '\0'; aux++)
			;

		wrote = write(fd, text_content, aux);

		if (wrote == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
