#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Crack this
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0, i = 0;

	srand(time(NULL));
	while (n < 2772)
	{
		i = rand() % 260;
		if ((i < 128))
		{
			if ((n + i <= 2992))
			{
				n += i;
				putchar(i);
			}
		}
	}
	return (0);
}
