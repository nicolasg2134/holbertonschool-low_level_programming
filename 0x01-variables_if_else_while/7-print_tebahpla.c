#include <stdio.h>

/**
 * main - Prints the alphabet at reverse
 *
 * Return: Always (0)
 */
int main(void)
{
  char cba;

  for (cba = 'z'; cba >= 'a'; cba--)
    {
      putchar(cba);
    }

  putchar('\n');

  return (0);
}
