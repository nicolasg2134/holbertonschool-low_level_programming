#include<stdio.h>
#include <unistd.h>

/**
 *main - useful print a text
 *Return: 1 Succes is true
 */

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
