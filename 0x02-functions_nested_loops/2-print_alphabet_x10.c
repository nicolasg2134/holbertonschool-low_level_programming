#include "holberton.h"
/**
 * print_alphabet_x10 - print x10 alphabet
 *
 * Description: Prints x10 times the alphabet
 * return 0 (Succes)
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char a;

	while (count++ <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
