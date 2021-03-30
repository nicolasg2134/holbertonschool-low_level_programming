#include "holberton.h"
/**
 * read_textfile - reads a text file.
 * @filename: Filename
 * @letters: Number of letters
 * Return: Number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read, wrote;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	read = read(fd, buf, letters);

	if (read == -1)
	{
		free(buf);
		return (0);
	}

	wrote = write(STDOUT_FILENO, buf, read);

	if (read != wrote || wrote == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (wrote);

}