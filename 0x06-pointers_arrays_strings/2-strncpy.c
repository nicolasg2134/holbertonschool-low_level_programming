#include "holberton.h"
/**
 *_strncpy - Copy Strings
 * @dest: Detination String
 * @src: base string
 * @n: variable
 * Description: Copy string
 * Return: always 0 (Succes)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cpy;
	cpy = 0;

	while(cpy < n && src[cpy] != '\0')
	{
		dest[cpy] = src[cpy];
		cpy++;

}
	while(cpy < n)
{
	dest[cpy] = '\0';
	cpy++;
}
	return(dest);
}
