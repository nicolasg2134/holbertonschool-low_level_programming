#include "holberton.h"

/**
 * string_toupper - Lowercase to uppercase
 * @s: pointer of String
 *
 * Description: Create Funtion transform low to upper
 * Return: Always 0 (Success)
 */

char *string_toupper(char *s)
{
	int ptr = 0;
	while(s[ptr] != '\0')
	{
		if(s[ptr] > 'a' && s[ptr] <= 'z')
			s[ptr] = s[ptr] - 'a' + 'A';
		ptr++;
}
	return(s);
}
