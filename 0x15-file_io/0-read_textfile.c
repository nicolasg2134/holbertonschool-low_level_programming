#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Write a function that reads a text file
 * @filename: Name of file
 * @letters: variable number to print
 *
 * Return: Number of letter of is 0 error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, f_read, f_wrote;
	char *bfr;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bfr = malloc(sizeof(char) * letters);

	if (bfr == NULL)
		return (0);

	f_read = read(file, bfr, letters);

	if (f_read == -1)
	{
		free(bfr);
		return (0);
	}

	f_wrote = write(STDOUT_FILENO, bfr, f_read);

	if (f_read != f_wrote || f_wrote == -1)
	{
		free(bfr);
		return (0);
	}

	free(bfr);
	close(file);
	return (f_wrote);

}
