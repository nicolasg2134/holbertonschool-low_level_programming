#include "holberton.h"

/**
 * main - alphabet
 * print_alphabet void - alphabet
 */

void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
}
