#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - function creates a file
 * @filename: Name of File
 * @text_content: Text to add file.
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, f_wrote, aux;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{

		for (aux = 0; text_content[aux] != '\0'; aux++)
			;

		F_wrote = write(file, text_content, aux);

		if (f_wrote == -1)
		{
			write(STDOUT_FILENO, "fails", 6);
			return (-1);
		}
	}
	close(file);
	return (1);
}
