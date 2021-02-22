#include "holberton.h"

/**
 * _strcmp - Return number
 * @s1: Compare 1
 * @s2: Compare 2
 *
 * Description: Create Funtions to Compare two Strings
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int cmp = 0;

	while ((s1[cmp] && s2[cmp]) && (s1[cmp] == s2[cmp]))
		cmp++;
	return (s1[cmp] - s2[cmp]);
}
