#include "holberton.h"

/**
 * _strncat - concatene two strings
 * @dest: string
 * @src: string
 * @n: variable
 *
 * Description: concatenate two strings
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int str, b;

	str = 0;
	while (dest[str] != '\0')
		str++;
	while (b < n && (dest[str] = src[b]))
	{
		str++;
		b++;
	}
	if (b < n)
		dest[str] = src[b];
	return (dest);
}
