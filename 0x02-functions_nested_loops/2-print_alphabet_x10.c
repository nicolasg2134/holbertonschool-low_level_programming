#incluye "holberton.h"
/**
 * print_alphabet_x10 - print x10 alphabet
 *
 * Description: Prints x10 times the alphabet
 * return 0 (Succes)
 */

void print_alphabet_x10(void)
{
	int c = 0;
	char abc;

	while (c++ <= 9)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
			_putchar(abc);
		_putchar('\n');
	}
}
