#include "holberton.h"

/**
 * print_alphabet - main 0
 * Return Always 0 (succes)
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
