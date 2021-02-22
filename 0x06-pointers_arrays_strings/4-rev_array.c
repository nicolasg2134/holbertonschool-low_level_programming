#include "holberton.h"

/**
 * reverse_array - Reverse String
 * @a: Strng 1
 * @n: Variable of Entero
 *
 * Description: Reverse an string on numbers
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int rev = 0;
	int arr;

	n--;
	while (rev != n)
	{
		arr = a[rev];
		a[rev] = a[n];
		a[n] = arr;
		n--;
		rev++;
	}
}
