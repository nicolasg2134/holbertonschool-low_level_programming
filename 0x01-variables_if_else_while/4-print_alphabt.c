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

	for (abc = 'a' ; abc <= 'z' ; abc++)
	{
		if (abc != 'q' && abc != 'e')
			putchar(abc);
	}
	putchar('\n');
	return (0);
}
