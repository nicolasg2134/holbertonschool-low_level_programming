#include <stdio.h>

/**
 * main - Prints a hexadecimal string
 *
 * Return: Always (Success)
 */
int main(void)
{
  char nex;

  for (nex = '0'; nex <= '9'; nex++)
    {
      putchar(nex);
    }

  for (nex = 'a'; nex <= 'f'; nex++)
    {
      putchar(nex);
    }

  putchar('\n');

  return (0);
}
