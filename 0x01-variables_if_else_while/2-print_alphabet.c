#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: prints the alphabet in lower case
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char abc;

	abc = 'a';
	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
