#include "holberton.h"

/**
 * string_toupper - Lowercase to uppercase
 * @s: pointer of String
 *
 * Description: Create Funtion transform low to upper
 * Return s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
		i++;
	}
	return(s);
}
