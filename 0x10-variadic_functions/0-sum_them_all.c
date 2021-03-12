#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Sum the numbers passed to the function.
 * @n: Quantity of numbers
 *
 * Return: Result of adding the numbers or 0 if not arguments were passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n != 0)
	{

	va_start(ap, n);

	for (i = 0; i < n; i++);

			sum += va_arg(ap, int);
		     va_end(ap);
	     return (sum);
	}
	return (0);
}
