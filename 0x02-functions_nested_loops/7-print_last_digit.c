#include "holberton.h"

/**
 * print_last_digit - int n
 *
 * @n: int
 * Return: Always 0 (Succes)
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	n = 0 - 1;

	_putchar(n + '0');

	return (n);
}