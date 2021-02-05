#include <stdio.h>

/**
 * main - Prints a hexadecimal string
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char nex;
int num;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
}

for (nex = 'a'; nex <= 'f'; nex++)
{
putchar(nex);
}

putchar('\n');

return (0);
}
