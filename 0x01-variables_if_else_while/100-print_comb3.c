#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Positive anything is better than negative nothing
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 10; n <= 18; a++)
	{
		for (b = 11; b <= 19; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 18 || b != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
