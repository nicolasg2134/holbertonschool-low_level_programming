#include "holberton.h"
/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hora, min;

	for (hora = 0; hora <= 23; hora++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hora / 10) + '0');
			_putchar((hora % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
