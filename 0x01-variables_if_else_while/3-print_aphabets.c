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
	char abc;
	char ABC;

	for (abc = 'a' ; abc <= 'z' ; abc++)
	{
		putchar(abc);
	}
	for (ABC = 'A' ; ABC <= 'Z' ; ABC++)
	{
		putchar(ABC);
	}
	putchar('\n');
	return (0);
}
