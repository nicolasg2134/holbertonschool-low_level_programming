#include "holberton.h"

/**
 * _strcat - string to another string
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Destination string as a pointer
 */

char *_strcat(char *dest, char *src)
{
	int str;
	int cat;

	str = 0;
	while (dest[str] != '\0')
		str++;
	while (dest[str] = src[cat])
	{
		str++;
		cat++;
	}
	return (dest);
}
