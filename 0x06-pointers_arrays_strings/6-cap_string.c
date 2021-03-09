#include "holberton.h"
/**
 * cap_string - Converts a string to CamelCase
 * @a: String
 *
 * Return: String as a pointer
 */
char *cap_string(char *a)
{
	int i = 0;
	int capitalize = 0;

	while (*(a + i))
	{
		if (*(a + i) == ',' || *(a + i) == ';' || *(a + i) == '.'
		|| *(a + i) == '!' || *(a + i) == '?' || *(a + i) == '"'
		|| *(a + i) == '(' || *(a + i) == ')' || *(a + i) == '\n'
		|| *(a + i) == '{' || *(a + i) == '}' || *(a + i) == ' '
		|| *(a + i) == '\t')
			capitalize = 1;
		else if (*(a + i) >= 'a' && *(a + i) <= 'z' && (capitalize == 1 || i == 0))
		{
			*(a + i) -= 32;
			capitalize = 0;
		}
		else
			capitalize = 0;
		i++;
	}
	return (a);
}
