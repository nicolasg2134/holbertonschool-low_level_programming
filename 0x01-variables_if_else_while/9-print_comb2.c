#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int a, b;

  a = b = '0';

  for (a = '0'; b <= '9'; a++)
    {
      for (a = '0'; b <= '9'; b++)
	{
	  putchara(a);
	  putchar(b);

	  if ((a != '9') || (a == '9' && b != '9'))
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }

  putchar('\n');

  return (0);
}
