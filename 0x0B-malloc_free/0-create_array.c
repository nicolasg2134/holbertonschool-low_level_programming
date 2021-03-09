#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Create an array of characters.
 * @size: Size of the array.
 * @c: Character for replacing.
 *
 * Return: Pionter to the array or NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size <= 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + i) = c;

	return (p);
}
