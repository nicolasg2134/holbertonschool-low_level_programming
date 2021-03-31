#include "holberton.h"
/**
 * error_write - Error write function
 * @argv: name of the file1
 */
void error_write(char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
	exit(99);
}
/**
 * error_read - funcion that read function
 * @argv: name of the file
 */
void error_read(char *argv)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
	exit(98);
}
/**
 * error_close - Error closing
 * @file: file descripions name
 */
void error_close(int file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
	exit(100);
}

/**
 * main - Copy one file to another
 * @argc: number of arguments
 * @argv: The arguments
 * Return: 0 in success
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	char buffer[1024];
	int characters = 1;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == 1)
		error_read(argv[1]);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to < 0)
		error_write(argv[2]);
	characters = read(file_from, buffer, 1024);
	while (characters > 0)
	{
		if (write(file_to, buffer, characters) < 0)
			error_write(argv[2]);
		characters = read(file_from, buffer, characters);
	}
	if (characters < 0)
		error_read(argv[1]);
	if (close(file_from) < 0)
		error_close(file_from);
	if (close(file_to) < 0)
		error_close(file_to);
	return (0);
}
