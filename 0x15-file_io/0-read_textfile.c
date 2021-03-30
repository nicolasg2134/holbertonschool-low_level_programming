#include "holberton.h"
/**
 * read_textfile - reads a text file.
 * @filename: Filename
 * @letters: Number of letters
 * Return: Number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reader, wrote;
	char *buf;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	reader = read(fd, buf, letters);

	if (reader == -1)
	{
		free(buf);
		return (0);
	}

	wrote = write(STDOUT_FILENO, buf, reader);

	if (reader != wrote || wrote == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (wrote);

}
