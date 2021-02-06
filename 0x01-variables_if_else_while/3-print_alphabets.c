#include <stdlib.h>
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
	char ab;
	char AB;

	for (ab = 'a' ; ab <= 'z' ; ab++)
	{
		putchar(ab);
	}
	for (AB = 'A' ; AB <= 'Z' ; AB++)
	{
		putchar(AB);
	}
	putchar('\n');
	return (0);
}
